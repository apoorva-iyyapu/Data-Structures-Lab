//double linked list-

//creation

#include<stdio.h>
#include<stdlib.h>
struct node
{
	float data;
	struct node*prev;
	struct node*next;
};
struct node*head=NULL, *tail=NULL,*cur,*t1,*t2;
void create()
{
	int n;
	printf("enter the number of nodes:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cur=(struct node*)malloc(sizeof(struct node));
		printf("enter current node data\n");
		scanf("%d",&(cur->data));
		cur->prev=NULL;
		cur->next=NULL;
		if(head==NULL)
		{
			head=tail=cur;
		}

		else

		{
			tail->next=cur;
			cur->prev=tail;
			tail=cur;
			
		}
	}
	
}

//insertion at begining
void insert_at_begin()
{
	cur =(struct node*)malloc(sizeof(struct node));	
	printf("ENTER CURRENT NODE DATA\n");
	scanf("%f", &(cur->data));
	cur->prev=NULL;
	cur->next=head;
	head->prev=cur;
	head=cur;
}

//insertion at end
void insert_at_end()
{
	cur =(struct node*)malloc(sizeof(struct node));
	printf("ENTER CURRENT NODE DATA\n");
	scanf("%f", &(cur->data));
	cur->next=NULL;
	cur->prev=tail;
	tail->next=cur;
	tail=cur;
}


//insertion at position
void insert_at_pos()
{
	int c=1,pos;
	cur =(struct node*)malloc(sizeof(struct node));
	printf("ENTER CURRENT NODE DATA\n");
	scanf("%f", &(cur->data));
	printf("enter position");
	scanf("%f",&pos);
	t1=head;
	while(c<pos && t1!=NULL)
	{
		t2=t1;
		t1=t1->next;
		c++;
	}
	t2->next=cur;
	cur->prev=t2;
	cur->next=t1;
	t1->prev=cur;
}
//insertion before and element
void insert_before()
{
	float value;
	cur =(struct node*)malloc(sizeof(struct node));
	printf("ENTER CURRENT NODE DATA\n");
	scanf("%f", &(cur->data));
	printf("enter the data before which node we need to insert");
	scanf("%f",&value);
	t1=head;
	while(t1!=NULL && t1->data!=value)
	{
		t2=t1;
		t1=t1->next;
	}
	t2->next=cur;
	cur->prev=t2;
	cur->next=t1;
	t1->prev=cur;
}
//insertion after an element
void insert_after()
{
	float value;
	cur =(struct node*)malloc(sizeof(struct node));
	printf("ENTER CURRENT NODE DATA\n");
	scanf("%f", &(cur->data));
	printf("enter the data before which node we need to insert");
	scanf("%f",&value);
	t1=head;
	while(t1!=NULL && t1->data!=value)
	{
		t1=t1->next;
	}
		cur->next=t1->next;
		t1->next->prev=cur;
		t1->next=cur;
		cur->prev=t1;
	
}

//deletion at begining

void delete_begin()
{
	cur=head;
	head=head->next;
	head->prev=NULL;
	cur->next=NULL;
	printf("deleted element is %f",cur->data);
	free(cur);
}

//deleteion at the end of an element

void delete_end()
{
	cur=tail;
	tail=tail->prev;
	tail->next=NULL;
	cur->prev=NULL;
	printf("deleted element is %f",cur->data);
	free(cur);
}

//deletion at a given position
void delete_at_pos()
{
	int c=1,pos;
	printf("enter the position of deletion");
	scanf("%d",&pos);
	t1=head;
	while(c<pos && t1!=NULL)
	{
		t2=t1;
		t1=t1->next;
		c++;
	}
	t2->next=t1->next;
	t1->next->prev=t2;
	printf("deleted element is %f",t1->data);
	free(t1);
}

//deletion before a given position
void delete_before()
{
	float pos;
	printf("enter the position of deletion");
	scanf("%f",&pos);
	t1=head;
	while(t1->next->data!=pos && t1->next!=NULL)
	{
		t2=t1;
		t1=t1->next;
		
	}
	t2->next=t1->next;
	t1->next->prev=t2;
	printf("deleted element is %f",t1->data);
	free(t1);
}

//deletion after given element

void delete_after()
{
	float value;
	printf("enter the data of node to delete");
	scanf("%f",&value);
	while(t1!=NULL && t1->data!=value)
		t1=t1->next;
	t2=t1->next;
	t1->next=t2->next;
	t2->next->prev=t1;
	printf("deleted element %f",t2->data);
	free(t2);
}

//displaying elements forward

void display_forward()
{
	if(head==NULL)
	printf("dll is empty");
	else
	{
		cur=head;
		printf("element of dl are\n");
		while(cur!=NULL)
		{
			printf("%f<->",cur->data);
			cur=cur->next;
		}
	}
}

// displaying elements in reverse

void display_reverse()
{
	if(head==NULL)
	printf(" dll is empty");
	else
	{
		cur=tail;
		printf("element of dl are\n");
		while(cur!=NULL)
		{
			printf("%f<->",cur->data);
			cur=cur->prev;
		}
	}
}

//searching of an element

void search_for_element()
{
int value,flag=0;
printf("Enter value to be searched:");
scanf("%f",&value);
int c=1;
//next is represnted as t1
t1=head;
while(t1!=NULL)
	{
		if(t1->data==value)
		{
			flag=1;
			break;
		}
		t1=t1->next;
		c++;
	}
	if(flag==1)
	{
		printf("Element present in the list at position %f\n",c);
	}
	else
	{	
		printf("Element not found\n");
	}
}

void sorting()
{
	struct node*p1,*last=NULL;
	int i,c,t;
	do
	{
		c=0;
		p1=head;
		while(p1->next!=last)
		{
			if(p1->data>p1->next->data)
			{
				t=p1->data;
				p1->data=p1->next->data;
				p1->next->data=t;
			}
   			 p1=p1->next;
		}
		last=p1;
	}
	while(c);
}
int main()
{
	int ch;
	while(1)
	{
		printf("program for double linked list\n");
		printf("1-create\n2-insert at begin\n3-insert at end\n4-insert at position\n5-insert before");
		printf("\n6-insert after\n7-delete at begin\n8-delete at end\n9-delete at pos\n10-delete before\n");
		printf("\n11-delete after\n12-traversal\n13-display in reverse\n14-search\n15-sort\n");
		printf("enter your choice\n");
		scanf("%f",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:insert_at_begin();
			break;
			case 3:insert_at_end();
			break;
			case 4:insert_at_pos();
			break;
			case 5:insert_before();
			break;
			case 6:insert_after();
			break;	
			case 7:delete_begin();
			break;
			case 8:delete_end();
			break;
			case 9:delete_at_pos();
			break;
			case 10:delete_before();
			break;
			case 11:delete_after();
			break;
			case 12:display_forward();
			break;
			case 13:display_reverse();
			break;
			case 14:search_for_element();
			break;
			case 15:sorting();
			break;
			case 16:exit(0);
		}
	}

}




