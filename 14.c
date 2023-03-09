#include <stdio.h>

int avg();

int main(){

    int num1, num2, num3;
    printf("enter the number and press enter :\t");
    scanf("%d\n%d\n%d", &num1, &num2, &num3);

    avg(num1, num2, num3);
    return 0;
}

int avg(num1, num2, num3)
{
    float a = (num1+num2+num3)/3;
    printf("average = %f \n", a);
}
