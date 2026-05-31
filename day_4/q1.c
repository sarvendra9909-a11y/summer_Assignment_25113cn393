//Fibonacci series in range.
#include <stdio.h>
int main()
{
    int i,n,a = 0,b = 1,s = 0;
    printf("Enter the term to  print fibonacci series upto given term: \n");
    scanf("%d",&n);
    printf("Fibonacci series upto %dth term is given below:\n",n);
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
          printf("%d ",s);
        }

    return 0;
}