#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two value: \n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("1st statement ok");
    }
    else
    {
        printf("2nd statement ok");
    }
    return 0;
}