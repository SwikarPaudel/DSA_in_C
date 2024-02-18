#include<stdio.h>
#include<conio.h>
int queue[100];
int front=0,rear=-1,maxSize=5;
void enqueue(int item)
{
	if(rear>=maxSize-1)
	{
		printf("Overflow");
	}
	else
	{
		rear=rear+1;
		queue[rear]=item;
	}
}
int dequeue()
{
	int item;
	if(front>rear)
	{
		printf("Queue is empty");
	}
	else
	{
		return queue[front++];
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d",queue[i]);
	}
}
void peek()
{
	printf("The front is %d:",queue[front]);
}
int main()
{
	int choice,i,item;
	abc:
	printf("\nEnter choice:\n");
	printf("\n1.Enqueue\n2.Dequeue\n3.peek\n4.display\n");
	scanf("\n%d",&choice);
	switch(choice)
	{
		case (1):{
			printf("\nEnter item to add:\n");
			scanf("\n%d",&item);
			enqueue(item);
			break;
		}
		case (2):{
			printf("\nDequeued item=%d\n",dequeue());
			break;
		}
		case (3):{
			peek();
			break;
		}
		case (4):{
			display();
			break;
		}
		default:{
			return 0;
			break;
		}
	}
	goto abc;
	
}
