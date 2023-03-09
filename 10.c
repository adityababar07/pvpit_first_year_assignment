// write a program to convert unit


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double value, converted_value;

void km_to_m(void)
{
    converted_value = value*1000;
    printf("\nThe conversion of %lf to m is %lf. \n",value, converted_value);
}

void m_to_km(void)
{
    converted_value = value/1000;
    printf("\nThe conversion of %lf to km is %lf.\n",value, converted_value);
}

void m_to_cm(void)
{
    converted_value = value*100;
    printf("\nThe conversion of %lf to cm is %lf.\n",value, converted_value);
}

void feet_to_inches(void)
{
    converted_value = value*12;
    printf("\nThe conversion of %lf to inches is %lf.\n",value, converted_value);
}

void inches_to_feet(void)
{
    converted_value = value/12;
    printf("\nThe conversion of %lf to feet is %lf.\n",value, converted_value);
}

int main(void)
{
    char convert_to; 
    int i = 1;

    while(i>0)
    {
        for (i=0; i<=60; i++)
        {
            printf("_");
        }
        printf("\n \n enter the number which you want to convert :\t");
        scanf("%lf", &value);

        // Need the function strcmp, or strncmp from string.h.

        // Since strings are just arrays, you need to compare each character, so this function will do that for you
        printf("\nTo what unit do you want  to convert the number to ? \n1] km to m,\n2] m to km,\n3] M to cm, \n4] feet to inches,\n5] inches to feet,\n6] All of the above,\n7] Exit \nChoose the unit you want to convert to by entering the number of your choice.");
        printf("\nEnter your choice :\t");
        scanf("%s", &convert_to);

        switch(convert_to)
        {
        case '1':
            km_to_m();
            break;

        case '2':
            m_to_km();
            break;

        case '3':
            m_to_cm();
            break;

        case '4':
            feet_to_inches();
            break;

        case '5':
            inches_to_feet();
            break;
        
        case '6':
            km_to_m();
            m_to_km();
            m_to_cm();
            feet_to_inches();
            inches_to_feet();
            break;

        case '7':
            printf("\nBye!!!\n");
            break;

        default:
            printf("did not convert \n");
            
        }
    }
    return 0;
}