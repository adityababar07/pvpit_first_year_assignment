#include <stdio.h>

int main(){
    int num = 67;

    for (int i = 1; i <= 10 ; i++)
    {
        printf("%d * %d = %d \n", i , num, num * i);
    }
    return 0;
}
