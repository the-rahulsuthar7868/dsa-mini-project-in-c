#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>
#include "queue.h"
#include "stack.h"
void stack()
{
int c,item;
   printf("\n \t stack implement using linked list\t \n");
   while (1)
   {
       printf("\n****** MENU ****** \n");
      printf("\n 1. push \n 2. pop \n 3. Display \n 4. Exit \n");
      printf("Enter your choice: ");
      scanf("%d",&c);
      switch(c){
	 case 1: printf("\n Enter the value to be insert: ");
		 scanf("%d", &item);
		 push(item);
		 break;
	 case 2: 

     printf("\n popped item = %d",pop());
      break;
	 case 3: display1(); break;
	 case 4: exit(1);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
    }      

}
void queue()
{
    int choice, value;
   printf("\n:: Queue Implementation using Linked List :: \n");
   while(1){
      printf("\n****** MENU ****** \n");
      printf("\n 1. Insert \n 2. Delete \n 3. Display \n 4. Exit \n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("\n Enter the value to be insert: ");
		 scanf("%d", &value);
		 insert(value);
		 break;
	 case 2: del(); break;
	 case 3: display(); break;
	 case 4: exit(1);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
    }
}
int main()
{
    int ch;
    printf("****\t program of implement stack and queue using linked list \t****");
  printf("\n 1.stack \n 2.Queue\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        stack();
        break;
    case 2:
        queue();
        break;
    default:printf("\nwrong choice\n");
        break;
    }
return 0;
   
}
