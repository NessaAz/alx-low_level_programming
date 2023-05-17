#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2-dimensional array
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the allocated grid, NULL if failed
*/

int **alloc_grid(int width, int height)
{
    if (width <= 0 || height <= 0)
        return (NULL);

    int **grid = malloc(sizeof(int *) * height);

    if (grid == NULL)
        return (NULL);

    for (int i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);

        if (grid[i] == NULL)
        {
            /* free previously allocated memory */
            for (int j = 0; j < i; j++)
            {
                free(grid[j]);
            }
            free(grid);
            return (NULL);
        }
        /* initialize elements to 0 */
        for (int j = 0; j < width; j++)
        grid[i][j] = 0;
    }

    return (grid);
}