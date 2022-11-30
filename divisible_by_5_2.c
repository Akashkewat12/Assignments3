#include<stdio.h>
int main()
{
    int num;
    printf("Enter your num-: \n");
    scanf("%d",&num);

    if(num%5==0)
        printf("divisible by 5\n");
    else
        printf("not divisible by 5\n");
    return 0;
}
