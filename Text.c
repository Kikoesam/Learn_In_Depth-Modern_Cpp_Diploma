
#include "stdio.h"
int main()
{

   /*
       1 2 3
       2 3
       3
   */
   for (int i = 0; i<10; i++)
   {
      for (int j = i ; j<10; j++)
      {
         printf(" %d",j);
      }
      printf("\n");
   }

return 0;
}