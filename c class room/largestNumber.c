#include<stdio.h>
int main()
{
    int x,y;
    printf("Please enter two number:");
    scanf("%d %d", &x,&y);
    if(x>y){
        printf("X is largest form Y!");
    }
    else{
        printf("X is smaller form Y!");
    }
    return 0;
}
