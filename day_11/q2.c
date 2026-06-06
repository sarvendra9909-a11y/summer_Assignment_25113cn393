// WAP TO WRITE FUNCTION TO FIND MAXIMUM .
#include <stdio.h>
int max( int x , int y)
{
     int maximum;
    if( x>y)
    {
     maximum = x;
    }
    else
    maximum = y;
    return maximum;
}
 
int main()
{
    int a , b , maximum;
    printf("Enter two No.\n");
    scanf("%d%d",&a,&b);
    maximum = max( a , b);
    printf("Out of %d and %d maximum is %d .",a , b , maximum);
    return 0;
}