#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,tatal_marks,persentage;
    printf("Emter marks-: \n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    tatal_marks=s1+s2+s3+s4+s5;
    //percentage
    printf("%.2f is tatal mark\n", tatal_marks);
    persentage=((tatal_marks/500)*100);
    printf("persentage is %f \n",persentage);
    if(persentage>33)
    {
        printf("pass");
    }
    else
    {
      printf("fail");
    }
    return 0;
}
