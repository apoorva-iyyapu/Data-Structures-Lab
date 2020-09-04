#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node* head=NULL, *tail=NULL,*cur,*next,*prev;
void create()
{
	int n,i;
	printf("enter the number of nodes:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		cur=(struct node*)malloc(sizeof(struct node));
		printf("enter current node data\n");
		scanf("%d",&(cur->data));
		cur->link=NULL;
		if(head==NULL)
		{
			head=tail=cur;
		}

		else

		{
			tail->link=cur;
			tail=cur;
			
		}
	}
	
}
void display()
{
	if(head==NULL)
		printf("list is empty");
	else
	{
		next=head;
		while(next!=NULL)
		{
			printf("%d->",next->data);
			next=next->link;
		}
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("program for single linked list\n");
		printf("1-create\n2-insert at begin\n3-insert at position\4-insert at end\n5-insert before");
		printf("\n6-insert after\n7-delete at begin\n8-delete at end\n9-delete at pos\n10-delete before\n");
		printf("11-delete after\n12-traversal\n13-display in reverse\n14-search\n15-sort\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
				break;
			case 12:display();
				break;
			case 16:exit(0);
		}
	}
	
	return 0;
}


