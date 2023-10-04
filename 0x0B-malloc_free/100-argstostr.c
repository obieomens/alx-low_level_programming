#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
int i, j, k, len;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
len = 0;
for (i = 0; i < ac; i++)
{
if (av[i] == NULL)
return (NULL);
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}


        

    
    
    
        
          

        
       

    

    

 
        

  
    
    
        
        
         
            
        
      
        
    




