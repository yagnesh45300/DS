#include<stdio.h>
#include<conio.h>

struct node{
int data;
struct node * next;
};

typedef struct node ll;

void main()
{
int ch,;
ll *root,*p,*newnode;
root=NULL;
clrscr();

while(ch<4)
{
	printf("\nPRESS 1 FOR CREATE LINK LIST AND INSERTING NEWNODE IN SORTED LINK LIST\n");
	printf("PRESS 2 FOR DISPLAY THE LINK LIST\n");
       //	printf("PRESS 3 FOR DISPLAY count\n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&ch);

switch(ch)
	{
	case 1:
		newnode=(ll *)malloc(sizeof(ll));
		printf("\nENTER DATA FOR NEW NODE:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(root==NULL)
		{
			root=newnode;
		}
	else
		{
		p=root;
		if(newnode->data<root->data)
		{
		newnode->next=root;
		root=newnode;
		}
		else if(newnode->data>=root->data)
			{
			while (p->next!=NULL && (p->data<=newnode->data && p->next->data<newnode->data))
			{
		p=p->next;
		}
		newnode->next=p->next;
		p->next=newnode;
		}
	}
break;

case 2:
	p=root;
	while(p!=NULL)
	{
		printf("%u->%d\n",p->data);
		p=p->next;
	      // c++;
	}

break;
/*case 3:
      while(p!=NULL)
      {
      c++;
      p=p->next;
      }
      printf("count is : %d ",c);
*/
default:
	printf("\nTHANK YOU\n");
break;
}
}
getch();
}
getch();
