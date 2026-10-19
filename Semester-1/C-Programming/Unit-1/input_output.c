
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    return 0;
}

Output 
Enter two numbers: 10 20
First number = 10
Second number = 20

scanf()- input lene ke liye use hota hai.
&a aur &b - variables ke addresses dete hain.
\n - next line mein le jaata hai.
%d - integer values ke liye use hota hai.