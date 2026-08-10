#include<stdio.h>
int main()
{
int a[10],i,pos,val,n;
printf("\n enter limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{

printf("\n enter value %d:",i+1);

scanf("%d",&a[i]);
}

printf("\n enter position :");
scanf("%d",&pos);
pos=pos-1;

printf("\n enter new value to be inserted:\n");
scanf("%d",&val);
for(i=n;i>pos;i--)
{
a[i]=a[i-1];

}

a[pos]=val;
for(i=0;i<=n;i++)
{
printf("\n %d",a[i]);

}

}




