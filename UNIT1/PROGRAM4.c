#include<stdio.h>
int main()
{

    int a[3],b[3],c[6],i,j=0;

    printf("\n enter value for a\n");
    for(i=0;i<3;i++)
    {


        printf("\n enter value %d:",i+1);

        scanf("%d",&a[i]);
        }

        printf("\n enter value for b\n");
        for(i=0;i<3;i++)
        {
            printf("\n enter value %d:",i+1);

        scanf("%d",&b[i]);
        }
        for(i=0;i<3;i++)
        {

            c[j]=a[i];
            j++;

        }

        for(i=0;i<3;i++)
        {

            c[j]=b[i];
            j++;
        }
        printf("\n merged elements are as follows\n");
        for(i=0;i<6;i++)
        {

            printf("\n %d",c[i]);

        }


    }
