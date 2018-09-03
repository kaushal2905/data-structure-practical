#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
InsertAtEnd(int data,struct node*s)
{
	struct node* N = (struct node*)malloc(sizeof(struct node));
	if(N == NULL)
	{
		printf("unable to allocate");
	}
	else
	{
		N->data = data;
		N->next = NULL;
		 
		 struct node*p = s;
		 while(p->next!=NULL)
		 {
		 	p = p->next;
		 	p->next = N;
		 }
	}
}
int main()
{
	int data;
	printf("the new list is");
	scanf("%d",&data);
}
