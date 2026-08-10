#include<stdio.h>
int main()
{
int a[10],i,sum=0;
float average;

printf("enter 10 elements:");

for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
average=sum/10.0;
printf("sum=%d\n",sum);
printf("average=%.2f\n",average);


}
