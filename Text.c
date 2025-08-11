#include <stdio.h>
//Write Source Code to Swap Two Numbers
/*Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2*/ 
 float a,b;
 float swapper;
 int main()
{
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f", &b);

        swapper=b;
        b=a;
        a=swapper;
        printf("After swapping, value of a = %f\n",a);
        printf("After swapping, value of b = %f\n",b);

}