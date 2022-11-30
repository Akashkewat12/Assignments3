//wap to check given number is possitive negative or none zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter your Number-:\n");
    scanf("%d",&num);
    if(num>0)
        printf("%d is possitive Number-:",num);
    else if(num<0)
        printf("%d is negative Number-:",num);
    else if(num<0.0)
        printf("%d is non zero-:",num);
    return 0;
}
