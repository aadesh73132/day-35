#include<stdio.h>
int main()
{
   
   int myNumbers[5]={11,12,13,14,15};

   myNumbers[2]=64;
   int i;
   for ( i = 0; i < 5; i++)
   {
      printf("%d\n",myNumbers[i]);
   }
    
    return 0;
}
