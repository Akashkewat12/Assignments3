
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your Number-:\n");
    scanf("%d",&num);
    if((num%3==0)&&(num%7==0))
        printf("%d is divisible by 3 and 7",num);
    else
        printf("%d is not divisible by 3 and 7",num);

    return 0;
}

