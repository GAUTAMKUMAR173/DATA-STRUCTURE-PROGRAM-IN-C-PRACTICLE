#include<stdio.h>
int main()
{
int a[3],b[3],c[3],i;

printf("enter 3 elements of a:\n");
for(i=0;i<3;i++)

{
scanf("%d",&a[i]);

}

printf("enter 3 elements of b:\n");
for(i=0;i<3;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<3;i++)
{
c[i]=a[i]+b[i];
}
printf("array c=a+b:\n");
for(i=0;i<3;i++)
{
printf("%d",c[i]);
}

}
