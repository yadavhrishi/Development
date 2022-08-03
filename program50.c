#include<Stdio.h>
#include<stdlib.h>

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

int Smallest(PNODE Head)
{
	int iMin = Head->data;
	while(Head != NULL)
	{
		if((Head->data) < iMin)
		{
			iMin = Head->data;
		}
		Head = Head->next;
	}
	return iMin;
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
	
	iRet = Smallest(First);
	printf("Smallest of all elements is : %d\n",iRet);
	
	return 0;
}