
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your Number-:\n");
    scanf("%d",&num);
    if((num%2==0)&&(num%3==0))
        printf("%d is divisible by 3 and 2",num);
    else
        printf("%d is not divisible by 22 and 3",num);

    return 0;
}
