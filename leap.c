#include<stdio.h>

int main()
{
int year;
scanf("%d",&year);
if(year%4==0)
{
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("Yes");
        }
        else
            printf("no");
    }
    else
        printf("Yes");
}
else
    printf("no");
return 0;
}
