#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the lenght of the string
 * @s: string to evaluate
 *
 * Retrun:the lenght of the string
 */
int _strlen(char *s)
{
	int i;
	i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int lenght, i;
	
	lenght = 0;

	while(src[lenght] != '\0')
	{
		lenght ++;
	}

	for (i = 0; i < lenght; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenght_1, lenght_2;

	lenght_1 = _strlen(name);
	lenght_2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	       return (NULL);
dog->name = malloc(sizeof(char) * (lenght_1 + 1));
if (dog->name == NULL)
{

	free(dog);
	return (NULL);
}

dog->owner = malloc(sizeof(char) * (lenght_2 + 1));
if (dog->owner == NULL)
{

        free(dog);
	free(dog->name);
        return (NULL);
}
_strcpy(dog->name,name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}
