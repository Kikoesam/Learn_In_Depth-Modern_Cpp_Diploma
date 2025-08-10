#include <stdio.h>
int N1;
int N2;
int main()
{
    printf("Enter two numbers: ");
    scanf("%d %d", &N1, &N2);
    printf("You entered: %d" , N1 + N2);
    return 0;
}