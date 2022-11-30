#include<stdio.h>
int main()
{
    int num;
    printf("Enter your num-: \n");
    scanf("%d",&num);

    if(num&1==1)
        printf("odd num\n");
    else
        printf("even num\n");
    return 0;
}
