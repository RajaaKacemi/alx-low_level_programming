#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * printf_dog - a function that prints a struct dog
 * @d: pointer to struct to print, if d is NULL we will print not    hing,
 * if an element is null wee will print nil insted of this elemen    t.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
		return;
	}	
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}


