// WAP TO WRITE FUNCTION TO CHECK PRIME .
#include <stdio.h>
void prime( int n)
{
    int c=0, i ;
     for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c = 1;
            break;
        }
    }
    if(n==1)
    printf("1 is Neither Prime NOR Composite.");
    else if(c==1)
    printf("%d is NOT a Prime no.",n);
    else if(c==0)
    printf("%d is PRIME no.",n);
    return ;
}
 int main()
 { 
    int n ;
    printf("Enter a No.\n");
    scanf("%d",&n);
    prime(n);
    return 0;
 }