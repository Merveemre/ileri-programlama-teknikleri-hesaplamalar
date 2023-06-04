#include <stdio.h>
#include <stdlib.h>
int main()
{
   int width=4,height=5,i,j,k;
   for ( i = 0; i < height; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf(" ");
        }
        for ( k = 1; k < width; k++)
        {
            printf("*");
        }
        printf("*\n");
    }
   }
