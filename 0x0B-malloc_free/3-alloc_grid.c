#include "main.h"
/**
 *alloc_grid-str concacate function with malloc
 *@width: input int for width
 *@height: input int for height
 *
 *Return: pointer to z concacated str
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arr_2d = NULL;
if (width <= 0 || height <= 0)
{
return (NULL);
}
arr_2d = (int **)malloc(height * sizeof(int *));
if (arr_2d == NULL)
{
return (NULL);
}
for (i = 0 ; i < height ; i++)
{
arr_2d[i] = (int *)malloc(width * sizeof(int));
if (arr_2d[i] == NULL)
{
for (j = 0 ; j <= i ; j++)
{
free(arr_2d[j]);
}
free(arr_2d);
return (NULL);
}
}
for (i = 0 ; i < height ; i++)
{
for (j = 0 ; j < width ; j++)
{
arr_2d[i][j] = 0;
}
}
return (arr_2d);
}
