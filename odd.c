#include<stdio.h>

int main()
{
int num;
scanf("%d",&num);
if(num>0)
{
if(num%2==0)
  printf("even");
else
  printf("odd");
 }
 else
  printf("invalid");
return 0;
}
