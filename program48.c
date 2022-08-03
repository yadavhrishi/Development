#include<Stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	printf("Elements from linked list are :\n");
	while(Head != NULL)
	{
		printf("| %d |\n",Head->data);
		Head = Head->next;
	}
}

int Addition(PNODE Head)
{
	int Add = 0;
	while(Head != NULL)
	{
		Add = Add + (Head->data);
		Head = Head->next;
	}
	return Add;
}

int main()
{	
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,70);
	InsertFirst(&First,30);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	
	Display(First);
	
	iRet = Addition(First);
	printf("Addition of all elements is : %d\n",iRet);
	
	return 0;
}