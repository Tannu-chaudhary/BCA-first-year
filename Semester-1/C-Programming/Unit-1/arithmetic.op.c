
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);

    if (b != 0)
    {
        printf("Division = %d\n", a / b);
        printf("Remainder = %d\n", a % b);
    }
    else
    {
        printf("Division is not possible\n");
        printf("Remainder is not possible\n");
    }

    return 0;
}

output 1: 
Enter two numbers: 10 3
Addition = 13
Subtraction = 7
Multiplication = 30
Division = 3
Remainder = 1


Output 2:
Enter two numbers: 10 0
Addition = 10
Subtraction = 10
Multiplication = 0
Division is not possible
Remainder is not possible

