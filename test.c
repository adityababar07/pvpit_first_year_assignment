#include <stdio.h>

int main() {
    int num, sum = 0;
    char num1[5];

    printf("Enter the number: ");
    scanf("%d", &num);

    sprintf(num1, "%d", num); // convert int to string

    for (int i = 0; num1[i] != '\0'; i++) {
        sum += num1[i] - '0'; // convert char to int
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
