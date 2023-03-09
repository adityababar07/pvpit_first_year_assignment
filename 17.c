#include <stdio.h>

struct student
{
    int roll_no;
    char name[50];
    int ph_no;
    char address[200];
}stu;

int main()
{   
    printf("enter the roll_no: \t");
    scanf("%d", &stu.roll_no);
    
    printf("enter the name: \t");
    scanf("%s", stu.name);

    printf("enter the ph_no: \t");
    scanf("%d", &stu.ph_no);

    printf("enter the address: \t");
    scanf("%s", stu.address);

    printf("the entered information is :- \n");
    printf("\nroll_no :\t %d \n", stu.roll_no);
    printf("name :\t%s \n", stu.name);
    printf("ph_no :\t%d \n", stu.ph_no);
    printf("address :\t%s \n", stu.address);
    return 0;
}
