#include <stdio.h>
int main()
{
   int y = 10;
   int b =  ++y;
   int a =  y++;
  
   printf ("%d, %d" , a, b);


   return 0;
}