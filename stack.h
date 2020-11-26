#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
}*top=NULL;
void push(int item)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    if (tmp==NULL)
    {
        printf("\n stack overflow\n");
        return;
    }
    tmp->info=item;
    tmp->link=top;
    top=tmp;
    
}
int pop()
{
    struct node *tmp;
    int free_value;
    if (isEmpty1())
    {
       printf("\n stack underflow\n");
       exit(1);
    }
    tmp=top;
    free_value=tmp->info;
    top=top->link;
    free(tmp);
    return free_value;
    
}
int peek()
{
    if (isEmpty1())
    {
        printf("\n stack is underflow\n");
        exit(1);
    }
    return top->info;
    
}
int isEmpty1()
{
    if (top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }  
}
void display1()
{
    struct node *ptr;
    ptr=top;
    if (isEmpty1())
    {
       printf("\n stack is Empty \n");
       return;
    }
    printf("\n element of stack: \n");
    while (ptr!=NULL)
    {
        printf(" %d\n",ptr->info);
        ptr=ptr->link;
    }
    printf("\n");
    
}