// WAP TO CHECK FOR A STRONG NUMBER.
#include <stdio.h>
int main()
{
    int fact = 1, n , l ,i , m ,sum = 0;
    printf("Enter a No.\n");
    scanf("%d",&n);
    m = n;
    while (n>0)
    {
      l = n%10;
      fact = 1;
      n = n/10;
      for( i = 1;i<=l;i++)
      {
        fact = fact*i;
      }
      sum = sum + fact;
    } 

    if( sum == m)
    printf("%d is an Strong No.",m);
    else 
    printf("%d is NOT an Strong No.",m);
    
    return 0;
}