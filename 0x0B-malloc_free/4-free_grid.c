#include "main.h"
/**
 *free_grid-2d array freeing function with malloc
 *@height: input size of z array
 *@grid: input double string
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0 ; i < height ; i++)
{
free(grid[i]);
}
free(grid);
}
