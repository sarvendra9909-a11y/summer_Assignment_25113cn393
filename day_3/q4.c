#include <stdio.h>
int main()
{
    int largest,a,b;
    printf("Enter two integers:\n");
    scanf("%d %d",&a,&b);
    largest = (a>b)?a:b;
    while (1)
{    
   if(largest % a == 0 && largest % b == 0)
   { printf("LCM of %d and %d is %d.",a,b,largest);
    break;
   }
    largest++;
}
 return 0;
}
