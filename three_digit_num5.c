
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your num-: \n");
    scanf("%d",&num);

    if((num > 99) && (num < 1000))
        printf("number is 3 digits\n");
    else
        printf("number is not 3 digits\n");
    return 0;
}
