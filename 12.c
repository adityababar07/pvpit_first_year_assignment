#include <stdio.h>

int main(void)
{
    int j, a= 7;
    for (int i=0; i<=7; i++)
    {   
        for (j=7; j>=1+i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
