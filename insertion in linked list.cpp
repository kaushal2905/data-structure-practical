#include<stdio.h>
#include<stdlib.h>

struct node{
	int Data;
	struct node *next;
};
typedef struct node ND;
ND* insert_beg(ND* ,int);
ND* insert_end(ND* ,int);
void insert_after(ND*,int);
ND* insert_before(ND* ,int);
void count(ND*);
ND* insert_i(ND*,int,int);
ND* delet_end(ND*);
ND* delet_begin(ND*);
ND* delete_any(ND*,int);
ND* reverse(ND*);
void search(ND*,int);
void display(ND*);
int main()

{
	int c,item ,i;
	ND*start=NULL;
	do
	{
		printf("press 1| Insert at beginning\npress 2|Insert at End\nPress 3|Insert after a node\npress 4| Insert before a node\npress 5|count number of node\npress 6|Insert at nth position\npress 7|Delet at begning\npress 8|Delet at end\npress 9|delet any position\npress 10|Reverse of list\npress 11|search\npress 12|display\npress 13|Exit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1: printf("enter the elements\n");
			        scanf("%d",&item);
			        start = insert_beg(start,item);
			        break;
			case 2: printf("enter the element\n");
			        scanf("%d",&item);
			        start = insert_end(start,item);
					break;
			case 3: printf("enter the key\n");
			        scanf("%d",&item);
			        insert_after(start,item);
			        break;
			case 4: printf("enter the key\n");
			        scanf("%d",&item);
			        start = insert_before(start,item);
			        break;
			case 5: count(start);
			        break;
			case 6: printf("enter the key and position\n");
			        scanf("%d%d",&item,&i);
			        insert_i(start,item,i);
			        break;
		    case 7: start = delet_begin(start);
			        break;
			        break;
		  //  case 7: start = deletbeg(start);
			//        break;
			case 8: start = delet_end(start);
			        break;
            case 9: printf("enter the key\n");
			        scanf("%d",&item);
					start = delete_any(start,item);
					break;
			case 10:start = reverse(start);
			        break;
			case 11: printf("enter the item\n");
			         scanf("%d",&item);
					 search(start,item);
					 break;
			case 12: display(start);
			         break;
			case 13: exit(0);		 		 							 
												        
							        
		}
	}
	while(1);
	
}
ND* insert_beg(ND*start,int item)
{
	ND*temp;
	temp = (ND*)malloc(sizeof(ND));
	if(temp == NULL)
	{
		printf("unseccesfull allocation");
	}
		else
		{
			temp ->Data =item;
			temp->next = start;
			start = temp;
			
		}
		return start;

}
//int main()
//{
//	return 0;
//}
