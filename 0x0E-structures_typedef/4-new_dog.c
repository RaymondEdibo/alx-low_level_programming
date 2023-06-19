#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - check the code
 *@name: char
 *@age: float
 *@owner: char
 *
 *Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int l;
	char *a;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (l = 1, a = name; *a; l++)
		a++;
	d->name = malloc(l);
	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}

	for (l = 1, a = owner; *a; l++)
		a++;
	d->owner = malloc(l);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (l = 0; *name != 0; l++, name++)
		d->name[l] = *name;
	d->name[l] = 0;
	for (l = 0; *owner != 0; l++)
		d->owner[l] = *owner++;
	d->owner[l] = 0;
	d->age = age;

	return (d);
}
