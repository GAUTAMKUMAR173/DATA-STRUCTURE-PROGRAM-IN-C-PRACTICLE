#include<stdio.h>
#define MAX 100
 int stack[MAX],top=-1;
 void push(int value);
 int pop();

 int main()
 {
 int num1,num2,a,b,temp;

 printf("enter the first number:");
 scanf("%d",&num1);

 printf("enter the second number:");
 scanf("%d",&num2);

 push(num1);
 push(num2);
 b=pop();
 a=pop();

 while(b!=0)

 {

 temp=b;
 b=a%b;
 a=temp;
 }

 printf("\n GCD of number is: %d",a);
 }

 void push(int value)
 {
 if(top==MAX-1)

{
printf("stack overflow \n");

}

else
{
top++;
stack[top]=value;
}

}

int pop()
{
if(top==-1)
{
printf("stack is underflow");
return -1;
}
else
{

return stack[top--];
}

}

