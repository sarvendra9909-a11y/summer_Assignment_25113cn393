// WAP TO RECURSIVE REVERSE NO.
#include <stdio.h>
int reverse_number(int n , int rev){
    if ( n==0)
    {
        return rev;
    }
    rev = (rev*10) + (n%10);
    return reverse_number( n/10,rev);
}  

int main()
{
    int n , reverse;
    printf("Enter a No.\n");
    scanf("%d",&n);
    reverse = reverse_number( n,0);
    printf("Reverse of %d is %d .",n,reverse);
    return 0;
}