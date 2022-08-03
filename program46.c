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
	printf("Elements from linked list are :");
	while(Head != NULL)
	{
		printf("| %d |\n",Head->data);
		Head = Head->next;
	}
}

int SearchFirst(PNODE Head,int no)
{
	PNODE temp = Head;
	int iCnt = 1;
	
	while(temp->data != no)
	{
		temp = temp->next;
		iCnt++;
	}
	return iCnt;
}

int main()
{	
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,70);
	InsertFirst(&First,30);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Display(First);
	
	iRet = SearchFirst(First,30);
	printf("Element first occured at: %d\n",iRet);
	
	return 0;
}