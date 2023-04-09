#include <stdio.h>
#include <stdlib.h>
	int stack[10];
	int top=-1;
	int main()
	{
		int i;
		printf("1. Push");
		printf("2.Pop");
		scanf("User Choice%d",i);
		switch(i)
		{
		case 1:
             push(stack [i]);
			break;
		case 2:
			 pop(stack[i]);
			break;
		default:
		printf("Invalid Choice");
		}
	}

	
    int push()
	{
		if (top==9)
		{
			printf("Stack Overflow");
		}
		else
		{
			top=top+1;
			printf("Enter data in stack");
			scanf("%d",stack[top]);
		
		}
	}
	int pop()
	{
		if(top==-1)
		{
			printf("Stack Underflow");
		}
		else
		{
			printf("%d",stack[top]);
			top=top-1;
		}
	}