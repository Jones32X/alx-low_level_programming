#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - length of string is returned
 * @s: string to evaluate
 * Return: length of string
 */

int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * _strcpy - copies string
 * @dest: pointer to buffer were string is copied
 * @src: string for copying
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int j = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (; j < length; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - generates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the new dog else NULL
 * if unsucessful
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
