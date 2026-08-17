#include <stdio.h>
long long factorial(int n);
void main()
{


    int n;
    long long z;
    printf("\n enter values:");
    scanf("%d",&n);
    z=factorial(n);
    printf("\n factorial is: %d",z);

}

long long factorial(int n)
{

long long f;
if(n==1)
    return 1;
else
    f=n*factorial(n-1);
return f;
}
