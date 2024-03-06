// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    puts("This is a software to find the sum of 3 numbers");
    int num1;
    int num2;
    int num3;

    printf("input 1st number:");
    scanf("%d", &num1);

    printf("input 2nd number:");
    scanf("%d", &num2);

    printf("input 3rd number:");
    scanf("%d", &num3);

    int sum = num1 + num2 + num3;

    printf("%d + %d + %d =%d", num1, num2, num3, sum);
    return 0;
}
