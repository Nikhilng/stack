#include<stdio.h>
#include<conio.h>
# define MAX 9
int top = -1;
int a[MAX];
void push(int x)
{
	if(top==MAX)
	{
		printf("overflow");
	}
	else
	{
		a[++top] = x;
		printf_s("%d \n", a[top]);
	}
}
void pop()
{
	int b;
	if (top < 0)
	{
		printf_s("underflow");

	}
	else
	{
		
		 top--;
		for(int i=top;i>=0;i--)

		printf_s("%d \n", a[i]);
	}
}
void main()
{
	
	push(10);
	push(20);
	push(30);
	printf_s("after pop\n");
	pop();
	_getch();


}