#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%2==0){
        printf("Number is even");
    }
    else if(n==0){
        printf("Number is zero!");
    }
    else if(n<0){
        printf("Number is negative");
    }
    else{
        printf("Number is positive!");
    }
}
