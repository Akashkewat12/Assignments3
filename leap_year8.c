#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year-: \n");
        scanf("%d",&year);

    if(year%4==0)
        printf("leap year\n");
    else
        printf("not leap year\n");

    return 0;
}
