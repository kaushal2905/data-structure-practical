#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
}*head;
void creatlist(int n);
void insertanode(int data);
void displaylist();

int main()
{
	int data,n;
	printf("enter the total number of nodes:");
	scanf("%d",&n);
	creatlist(n);
	
	printf("\ndata in the list\n");
	displaylist();
	
	printf("enter the data to be insert at the begning of list:");
	scanf("%d",&data);
insertanode(data);

 
    printf("\ndata in the list\n");
    displaylist();
     return 0;
    
}
void creatlist(int n)
{
    struct node*newNode,*temp;
    int data,i;
	head = (struct node*)malloc(sizeof(struct node));
	if(head == NULL)
	{
		printf("allocation not allowed");
	}
	else
	{
	  printf("enter the data of node 1:");
	  scanf("%d",&data);
	  
	  head->data = data;
	  head->next = NULL;
	  	temp = head;
	  }
	 for(i=2;i<=n;i++)
	 {
	 	newNode = (struct node*)malloc(sizeof(struct node));
	 	if(newNode== NULL)
	 	{
	 		printf("unable to allocate memory");
	 		break;
		 }
		 else
	 	{
	 		printf("enter the data of node %d:",i);
	 		scanf("%d",&data);
	 		 newNode->data = data;
	 		 newNode->next = NULL;
	 		 temp ->next = newNode;
	 		 temp = temp->next;
	 		 
       }
	 }

	printf("singly linked list created succesfully\n");
}

void insertanode(int data)

{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	
	if(newNode == NULL)
	{
		printf("unable to allocate");
	   //reak;
	}
	else
	{
		newNode ->data = data;
		newNode ->next = head;
		
		head = newNode;
		
		printf("data inserted successsfully\n");
	}
	
}
void displaylist()
{
	struct node*temp;
	if(head == NULL)
	{
		printf(" list is empty ");
		
	}
	else
	{
		temp = head;
		while(temp!= NULL)
		{
			printf("data = %d\n",temp->data);
			temp= temp->next;
		}
	}
}
