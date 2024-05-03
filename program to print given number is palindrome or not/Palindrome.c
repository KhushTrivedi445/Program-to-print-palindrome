#include<stdio.h>
int main () {
    int a,r,rev=0,n;
    printf("Enter the number you want to reverse :");
    scanf("%d",&a);
    n=a;
    while(a!=0){
        r=a%10;
        rev= rev*10 + r;
        a=a/10;
    }
    printf("After reversing the number is %d",rev);
    

    if(rev==n){
        printf("\nHence it is palindrome");
    } else {
        printf("\nHence it is not palindrome");
    }
    return 0;
}