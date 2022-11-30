#include<stdio.h>
int main()
{
    int num_1,num_2;

    printf("Enter your num-: \n");
    scanf("%d %d",&num_1,&num_2);

    if(num_1>num_2)
        printf("Number 1 is greater\n");
    else if(num_1==num_2)
        printf("both are same\n");
        else
            printf("number 2 is greater\n");
    return 0;
}
