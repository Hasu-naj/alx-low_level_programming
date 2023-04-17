#include "dog.h"
#include <stdlib.h>

/**
* _strlen - a function that returns the length of a string
* @s: string
*
* Return: length of the string *s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copie the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 *
 * Return: the parameter dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int n = 0;

	while (src[n] != '\0')
	{
		n++;
	}
	for (i = 0 ; src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * new_dog -  create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int len1;
	int len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(char) * (len1 + 1));

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (len2 + 1));

	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}

	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
