#include<stdio.h>
#define MAX 30

int stack[MAX],top=-1;

void push(char ch);
char pop();

int main()
{

    int i=0;
    char str[30];
    printf("enter string:");
    fgets(str,30,stdin);
    while(str[i]!='\0')
    {

        push(str[i]);
        i++;

    }

    while(top!=-1)
    {

        printf(" %c",pop());
    }

}

void push(char value)
{

    if(top==MAX-1)
    {

        printf("\n stack is overflow");

    }
    else
{

    top++;
    stack[top]=value;
}


}


char pop()
    {


        if(top==-1)
        {

            printf("\n stack is underflow--");
            return '\0';

        }


    return stack[top--];


    }


