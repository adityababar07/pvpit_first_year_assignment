#include <stdio.h>

int main()
{
    int age_of_shyam, age_of_ram, age_of_ajay;

    printf("enter the age of shyam :\t");
    scanf("%d",&age_of_shyam);

    printf("enter the age of ram :\t");
    scanf("%d",&age_of_ram);

    printf("enter the age of ajay :\t");
    scanf("%d",&age_of_ajay);

    if (age_of_ajay <= age_of_ram && age_of_ajay <= age_of_shyam)
    {
        printf("ajay is youngest.\n");
    }

    if (age_of_ram <= age_of_ajay && age_of_ram <= age_of_shyam)
    {
        printf("ram is youngest.\n");
    }

    if (age_of_shyam <= age_of_ram && age_of_ram <= age_of_ajay)
    {
        printf("shyam is youngest.\n");
    }

    return 0;
}