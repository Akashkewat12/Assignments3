#include<stdio.h>
int main()
{
    int s_p,c_p;
    //profit
    printf("Enter your selling and cast price");
    scanf("%d %d",&s_p,&c_p);
    if((s_p-c_p)>0)
    {
     printf("profit");
    }

        else
        printf("loss");
    return 0;
}
