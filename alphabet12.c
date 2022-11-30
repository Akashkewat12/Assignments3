#include<stdio.h>
int main()
{
char check='a';
if((check>='A')&&(check<='Z'))
    printf("Upper");
else if((check>='a')&&(check<='z'))
    printf("lower");
return 0;
}
