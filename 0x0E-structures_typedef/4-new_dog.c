#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int _strlen(char *a);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - length of string
 * @a: string
 *
 * Return: length of string
 */
int _strlen(char *a)
{
	int b = 0;

	while (*a++)
		b++;

	return (b);
}
/**
 * *_strcpy - copies  of a string
 * @dest: buffer
 * @src: string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a]; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner for the dog
 *
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
