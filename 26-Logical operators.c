//Simple use of Logical operators
#include<stdio.h>

void main()
{   
    int a, b;
    
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    
    printf("(%d >= %d) && (%d == %d) is ", a, b, a, b);
    (a >= b) && (a == b) ? printf("True") : printf("False");

    printf("\n(%d >= %d) || (%d == %d) is ", a, b, a, b);
    (a >= b) || (a == b) ? printf("True") : printf("False");

    printf("\n(%d <= %d) && (%d == %d) is ", a, b, a, b);
    (a <= b) && (a == b) ? printf("True") : printf("False");

    printf("\n(%d <= %d) || (%d == %d) is ", a, b, a, b);
    (a <= b) || (a == b) ? printf("True") : printf("False");

    printf("\n!(%d == %d) is ", a, b, a, b);
    !(a == b) ? printf("True") : printf("False");
}