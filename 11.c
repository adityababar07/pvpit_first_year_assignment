#include <stdio.h>

int main(void){

    int num;    
    char num1[5];

    printf("Enter the number :\t");
    scanf("%d", &num);

    num1 = num;
    
    
    printf("%s", num1[1]);
    return 0;
}
