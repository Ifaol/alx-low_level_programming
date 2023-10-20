#include "main.h"
/**
 *array_range-a array containg numbers from min to max creater function
 *@min: int input
 *@max: int input
 *Return: Void
 */
int *array_range(int min, int max)
{
int i;
int *ptr = NULL;
if (min > max)
{
return (NULL);
}
ptr = malloc(sizeof(int) * ((max - min) + 1));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0 ; min <= max ; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
