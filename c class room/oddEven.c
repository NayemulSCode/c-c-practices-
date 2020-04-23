
#include<stdio.h>
int main()
{
    int a;
    printf("please enter a Integer number: ");
    scanf("%d", &a);
    if(a%2==0){
        printf("Number even !");
    }
    else{
        printf("Number is odd!");
    }
    return 0;
}
