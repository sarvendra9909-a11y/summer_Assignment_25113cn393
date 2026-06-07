// WAP TO WRITE FUNCTION FOR FIBONACCI .
#include <stdio.h>
void fib( int n)
{
      int i,a = 0,b = 1,s = 0;
    for(i=0;i<n;i++)
    {    if(i<=1)
        {
            s = i; //First two terms.
        } 
        else
         {s = a+b;
          a = b;
          b = s;
         }
         
        }
       printf("The %dth term of Fibonacci series is %d.\n",n,s);
    return ;
}
int main()
{ 
    int n ;
    printf("Enter the term of fibonacci series: \n");
    scanf("%d",&n);
    fib( n);
    return 0;
}