#include<stdio.h>

int main()
{
int n,k,arr[100],i,sum=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<k;i++)
{
    sum=sum+arr[i];
}
printf("%d",sum);
return 0;

}
