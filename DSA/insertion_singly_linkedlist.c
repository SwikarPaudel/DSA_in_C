#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int data;
	struct node*next;
};
struct node*createNode(int data){
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
		if(newNode==NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}
struct node*insertAtEnd(struct node* start){
	struct node*newNode=createNode(0);
	printf("Enter data for the newNode:");
	scanf("%d",&(newNode->data));
	newNode->next=NULL;
	
	if(start==NULL){
		//if the list emty,set the new node as the start
		start=newNode;
	}
	else{
		//Traverse the list to find the last node and insert the new node at the end
		struct node*temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
	printf("Node inserted at the end successfully.\n");
	return start;
}
struct node*insertAtBeginning(struct node*start){
	struct node*newNode=createNode(0);
	printf("Enter data for the new node:");
	scanf("%d",&(newNode->data));
	newNode->next=start;
	start=newNode;
	printf("Node inserted at the beginning successfully:\n");
	return start;
}
struct node*insertAtPositionGiven(struct node*start){
	struct node*newNode=createNode(0);
	int position;
		printf("Enter the position to insert(1 to N+1):");
	scanf("%d",&position);
	printf("Enter data for the new node:");
	scanf("%d",&(newNode->data));
	newNode->next=NULL;
	
	if(position==1){
		//insert at the beginning
		newNode->next=start;
		start=newNode;
	}
	else{
		//Traverse the list to find the position
		struct node*temp=start;
		int i;
		for(i=1;i<position-1&&temp!=NULL;++i){
			temp=temp->next;
		}
		if(temp==NULL){
			printf("Invalid position.Inserting at the end.\n");
			//insert at the end if the position is invalid
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
		}
	//Insert the new node at the specified position
	newNode->next=temp->next;
	temp->next=newNode;	
	}
	printf("Node inserted at the specifies position successfully.\n");
	return start;
}
void freeMemory(struct node* start){
	struct node* temp;
	while(start!=NULL)
	{
		temp=start;
		start=start->next;
		free(temp);
	}
}
//Function to print the linked list
void printList(struct node* start)
{
	struct node* temp=start;
	if(temp==NULL)
	{
		printf("The list is empty.");
	}
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	struct node* start=NULL;
	int choice;
	do{
		printf("Choose Insertion At:\n");
		printf("1.End 2.Beginning 3.Certain Position 4.Display 5.Exit\n");
		scanf("%d",&choice);
	switch(choice)
{
		case 1:
		start=insertAtEnd(start);
		break;
	case 2:
		start=insertAtBeginning(start);
		break;
	case 3:
		start=insertAtPositionGiven(start);
		break;
	case 4:
		printList(start);
		break;
	case 5:
		printf("Exiting");
		break;
	default:
		printf("Invalid Choice.Enter again!\n");
	}
	}while(choice!=5);
	//Free allocated memory
	freeMemory(start);
	return 0;
}
