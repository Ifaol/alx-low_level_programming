#include "dog.h"
#include <stddef.h>
/**
 *init_dog - dog struct initializing function
 *@d: struct pointer input
 *@name: string pointer input
 *@age: float age input
 *@owner: string pointer input
 *
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL && age >= 0)
{
if (name != NULL && owner != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
}
