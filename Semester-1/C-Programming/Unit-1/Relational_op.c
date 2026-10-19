
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);

    return 0;
}

Output :
Enter two numbers: 10 5
a > b = 1
a < b = 0
a == b = 0
a != b = 1
a >= b = 1
a <= b = 0


Note - C mein condition true hone par 1 aur false hone par 0 print hota hai