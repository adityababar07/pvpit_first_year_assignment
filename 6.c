// write a program to perform different 'C' operations using different arithmetic operators //

#include <stdio.h>

int main(void)
{
    int a , b, no_of_nums, i;
    char choice;
    int list[no_of_nums];
    
    printf("Enter how many numbers you wanna operate :\t");
    scanf("%d", &no_of_nums);
    printf("Enter numbers for operation !!! \n");
    printf("no_of_nums = %d \n", no_of_nums);
    for (i = 0; i < no_of_nums; ++i )
    {
        printf("Enter a number %d : \n", i);
        scanf("%d", &list[i]);
    }
    printf("what operation do you want to do ? (a,s,m,d)");
    scanf("%c", &choice);
    if (choice == 'a'){

        // for ()
        printf("Addition of the numbers = %d" );
    };

    return 0;
}
