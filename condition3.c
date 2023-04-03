#include<stdio.h>
int main ()
{
    int result;
    scanf("%d",&result);

    if(result>80)
    {
        printf("You got gpa 5");
    }
    else if(result>70)
    {
        printf("You got gpa 4");
    }
     else if(result>60)
    {
        printf("You got gpa 3");
    }
    else if(result>50)
    {
        printf("You got gpa 2");
    }
    else
    {
        printf("You got gpa 1");
    }

    return 0;
}