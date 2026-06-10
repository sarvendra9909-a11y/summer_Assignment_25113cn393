 // WAP TO FIND DUPLICATE IN AN ARRAY.
 #include <stdio.h>
 int main()
 {
    int arr[10] , n , i , d , c=0 ;
    printf("Enter the size of an array.\n");
    scanf("%d",&n);
    printf("Enter the elements of array.\n");
    for( i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element whose duplicate is to be find .\n");
    scanf("%d",&d);
    for( i=0 ; i<n ; i++){
        if( arr[i]==d){
            c=1;
            break;
        }
    }
    if( c==1 )
    printf("Duplicate of %d is found at index %d.",d,i);
    else
    printf("Duplicate of %d does NOT exist.",d);
    return 0;
 }