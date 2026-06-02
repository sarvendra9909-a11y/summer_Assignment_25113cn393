// WAP TO FIND X^N WITHOUT POW().
#include <stdio.h>
int main()
{
   int x , n , c = 1 , i ;
   printf("Enter base x and power n . \n");
   scanf("%d%d",&x,&n);
   for( i = 1; i<=n ;i++)
   {
      c = c*x;
   }
   printf("%d^%d = %d",x,n,c);
    return 0;
}