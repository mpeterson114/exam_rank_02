#include <stdio.h>
#include <stdlib.h>

int     abs_val(int n)
{
        if (n < 0)
                n *= -1;
        return (n);
}

int     *ft_range(int start, int end)
{
        int *array;
        int i = 0;

        array = malloc(sizeof(int) * (abs_val(start) + abs_val(end) + 1));
        if (!array)
                return 0;
        if (start <= end)
        {
                while (start <= end)
                {
                        array[i] = start;
                        i++;
                        start++;
                }
        }
        else if (end < start)
        {
                while (start >= end)
                {
                        array[i] = start;
                        i++;
                        start--;
                }
        }
        return (array);
}

/*int main()
{
        int n = 3;
        int y = -1;
        int *array = ft_range(n, y);
        int i = 0;
        int len = abs_val(n) + abs_val(y) + 1;

        while (i < len)
        {
                printf("[%i]\n", array[i]);
		i++;}
return 0;}*/

