#include<stdio.h>
int main()
{
int a[10],i,search,found=0;
printf("enter 10 elements:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("array elements are:\n");
for(i=0;i<10;i++)
{
printf("%d",a[i]);
}

printf("\n enter element to search:");
scanf("%d",&search);
for(i=0;i<10;i++)
{
if(a[i]==search)

{
printf(" element found at position %d\n",i+1);
found=1;
break;
}
}
if(found==0)
{
printf("element not found\n");

}

return 0;
}
