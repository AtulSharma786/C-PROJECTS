// To print pattern
// 1
// 12
// 123
// 1234
// 12345

#include<stdio.h>

void main(){
    
    int number;

    printf("Please enter a number\n");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}