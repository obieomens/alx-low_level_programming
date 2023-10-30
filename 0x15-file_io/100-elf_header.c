#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_info - Print ELF header information.
 * @header: The ELF header structure.
 */
void print_elf_info(Elf64_Ehdr *header)
{
	int i;
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i)
        printf("%02x ", header->e_ident[i]);
    printf("\n");

    printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", (header->e_type == ET_REL) ? "REL (Relocatable file)" :
                                                          (header->e_type == ET_EXEC) ? "EXEC (Executable file)" :
                                                          (header->e_type == ET_DYN) ? "DYN (Shared object file)" :
                                                          (header->e_type == ET_CORE) ? "CORE (Core file)" :
                                                          "UNKNOWN");
    printf("  Entry point address:               %lx\n", (unsigned long)header->e_entry);
}

/**
 * elf_header_info - Read and display ELF header information.
 * @filename: The name of the ELF file.
 */
void elf_header_info(const char *filename)
{
    int fd;
    Elf64_Ehdr elf_header;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Could not open file %s\n", filename);
        exit(98);
    }

    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
    {
        dprintf(STDERR_FILENO, "Error: Could not read ELF header from file %s\n", filename);
        close(fd);
        exit(98);
    }

    if (lseek(fd, (off_t)elf_header.e_phoff, SEEK_SET) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Could not lseek to program header table in file %s\n", filename);
        close(fd);
        exit(98);
    }

    print_elf_info(&elf_header);

    close(fd);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    elf_header_info(argv[1]);

    return 0;
}

