#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,mod;
    float div;
    printf("Enter two digit:\n");
    scanf("%d %d",&a,&b );
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=(a*1.0)/b;
    mod=a%b;
    printf("%d \n %d\n %d\n %f\n %d",sum,sub,mul,div,mod);

    return 0;
}