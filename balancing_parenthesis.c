#include<stdio.h>
#define size 100
char stack[size];
int top=-1;
int push(char );
int pop();
int main()
{
    char a[100];
    scanf("%[^\n]s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(' || a[i]=='{' || a[i]=='[')
        {
            push(a[i]);
        }
        else if(a[i]==')' || a[i]=='}' || a[i]==']')
        {
            pop();
        }
    }
    if(top==-1)
    {
        printf("\nparanthases are balanced");
    }
    else 
    {
        printf("\nparanthesis are not balanced");
    }
    
}
int push(char x)
{
    top++;
    stack[top]=x;
}
int pop()
{
    top--;
}

