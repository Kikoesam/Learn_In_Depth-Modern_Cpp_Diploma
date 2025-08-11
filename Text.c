#include <stdio.h>
int a,b,c;

int main()
{
    printf("add the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b)
    {
        if (a>c)
        printf("a is the biggest number");
        else 
        printf("c is the biggest number");
    }
    else if (b>c)
    {
        if (b>a)
        printf("b is the biggest number");
        else
        printf("a is the biggest number");
    }
    else
    printf("c is the biggest number ");
    return 0;
}