#include<stdio.h>
int main()
{
    int x;
    printf("Enter your Score: \n");
    scanf("%d", &x);
    if((x>=80) && (x<=100)){
        printf("Your grade is :A+");
    }
    else if((x>=70) && (x<=79)){
        printf("Your grade is :A");
    }
    else if((x>=60) && (x<=69)){
         printf("Your grade is :A-");
    }
    else if((x>=50) && (x<=55)){
         printf("Your grade is :B");
    }
    else if((x>=40) && (x<=49)){
         printf("Your grade is :C");
    }
    else if((x>=33) && (x<=39)){
         printf("Your grade is :D");
    }
    else{
        printf("Your grade is fail");
    }
}
