#include <stdio.h>
#include <conio.h>
int ch, n, x, top = -1, i, stack[100];
void push();
void pop();
void display();
//Aditya Seth
int main()
{
	printf("Enter Number:\n");
	scanf("%d", &n);
	do
	{
		printf("1. Push\n 2. Pop\n 3. Display\n 4. Exit\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
		case 3:
			display();
			break;
		case 4:
			printf("bye:\n");
			break;
		default:
			printf("wrong choice. \n");
		}
	} while (ch != 4);
	return 0;
}

void push()
{
	if (top == n - 1)
	{
		printf("Full\n");
	}
	else
	{
		printf("Enter elements: \n");
		scanf("%d", &x);
		top++;
		stack[top] = x;
	}
}

void pop()
{
	if (top == -1)
	{
		top--;
		x = stack[top];
	}
	else
	{
		printf("Empty\n");
	}
}
void display()
{
	if (top > 0)
	{
		for (i = 0; i < top; i++)
		{
			printf("%d", stack[i]);
		}
	}
}
