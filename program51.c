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

void AdditionofDig(PNODE Head)
{
	while(Head != NULL)
	{
		int iDigit = 0;
		int iAdd = 0;
		
		while((Head->data)!=0)
		{
			iDigit = (Head->data)%10;
			iAdd = iAdd + iDigit;
			Head->data = (Head->data)/10;
		}
		printf("Adiition is element is %d\n",iAdd);
		Head = Head->next;
	}
}

int main()
{	
	PNODE First = NULL;
	
	InsertFirst(&First,240);
	InsertFirst(&First,320);
	InsertFirst(&First,230);
	InsertFirst(&First,110);
	
	Display(First);
	
	AdditionofDig(First);
	
	
	return 0;
}