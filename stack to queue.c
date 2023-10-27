#include <stdio.h>
#include <stdlib.h>
# define max 5
int top1=-1,top2=-1;
int q[max],q1[max];
int c=0;
void push1(int x)
{
	if(top1==max-1)
	{
		printf("Queue is full");
	}
	else
	{
		top1=top1+1;
		q[top1]=x;
	}
}
int pop1()
{
	int ele;
	if(top1==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		ele=q[top1];
		top1=top1-1;
	}
	return ele;
}
void push2(int x)
{
	if(top2==max-1)
	{
		printf("Queue is full");
	}
	else
	{
		top2=top2+1;
		q1[top2]=x;
	}
}
int pop2()
{
	int ele;
	if(top2==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		ele=q1[top2];
		top2=top2-1;
	}
	return ele;
}
void enqueue(int p)
{
	push1(p);
	c++;
}
void dequeue()
{
	int i,g;
	for(i=0;i<c;i++)
	{
		g=pop1();
		push2(g);
	}
	int a=pop2();
	c--;
	int h;
	for(i=0;i<c;i++)
	{
		h=pop2();
		push1(h);
	}
}
void display()
{
	int i;
	for(i=0;i<c;i++)
	{
		printf("%d ",q[i]);
	}
}
int main() {
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	dequeue();
	enqueue(50);
	dequeue();
	display();
	return 0;
}
