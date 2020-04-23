#include<stdio.h>
int main()
{
    long num,temp,digit,sum=0;
    printf("Enter any integer number:");
    scanf("%ld",&num);
    temp=num;
    while(num>0){
        digit=num%10;
        printf("digit: %ld ",digit);
        sum =sum + digit;
        printf("sum: %ld ",sum);
        num/=10;
        printf("num: %ld\n",num);
    }
    printf("Given Number: %ld\n",temp);
    printf("Sum of the digits: %ld = %ld\n", temp, sum);
}
