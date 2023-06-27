#include<stdio.h>
#include<stdlib.h>
struct tnode
{
    int data;
    struct tnode* next;
};

typedef struct tnode node;
node* head = NULL;
void insert()
{
	int i,val,pos;
    printf("ENTER THE POSITION:");
    scanf("%d",&pos);
    printf("ENTER THE VALUE:");
    scanf("%d",&val);
    node* temp = head;
    node* newnode = (node*)malloc(sizeof(node));
    (*newnode).data = val;
    if(pos == 0)
    {
    	if(head == NULL)
    	{
        	(*newnode).next = NULL;
        	head = newnode;
    	}
    	else
    	{
    	    (*newnode).next = head;
    	    head = newnode;
    	}
	}
	else
	{
		for(i = 1;i < pos;i++)
		{
			temp = (*temp).next;
            if(temp == NULL)
            {
                printf("INVALIED POSITION");
                return;
            }
		}
		newnode->next = (*temp).next;
		(*temp).next = newnode;
	}
    printf("INSERT THE ELEMENT IS %d",val);
}
void delete()
{
    int i,pos;
    printf("ENTER THE POSITION:");
    scanf("%d",&pos);
    node* temp = head;
    node* prev;

    if(head == NULL)
    {
        printf("THE LIST IS EMPY");
        return;
    }
    if(pos == 0)
    {
        head = (*head).next;
        printf("DELETED SUCESSFULLY");
        free(temp);
        return;
    }
    for(i = 0; i < pos; i++)
    {
        prev = temp;
        temp =(*temp).next;
        if(temp == NULL)
        {
            printf("INVALIED POSITION");
            return;
        }
    }
    (*prev).next = (*temp).next;
    printf("DELETE SUCESSFULLY");
    free(temp);
}
void dispaly()
{
    if(head == NULL)
    {
        printf("NODE IS EMPTY");
        return;
    }
    node* temp = head;
	
	printf("INSERT ELEMENTS ARE:");
    while(temp != NULL)
    {
        printf("%d ",(*temp).data);
        temp = (*temp).next;
    }
}
int main()
{
    int choice;
    int val,pos;
    while(1)
    {
        printf("\nLIKED LIST MENU:\n");
        printf("================\n");
        printf("1.INSERT:\n");
        printf("2.DIPLAY:\n");
        printf("3.DELETE\n");
        printf("4.EXIT\n");
        printf("ENTER THE CHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :insert();
            break;
            case 2 : dispaly();
            break;
            case 3 :delete();
            break;
            case 4 : exit(0);
            break;
        }
    }
}
/*OUTPUT:
LIKED LIST MENU:
================
1.INSERT:
2.DIPLAY:
3.DELETE
4.EXIT
ENTER THE CHOICE:1
ENTER THE POSITION:0
ENTER THE VALUE:10
INSERT THE ELEMENT IS 10
LIKED LIST MENU:
================
1.INSERT:
2.DIPLAY:
3.DELETE
4.EXIT
ENTER THE CHOICE:1
ENTER THE POSITION:1
ENTER THE VALUE:20
INSERT THE ELEMENT IS 20
LIKED LIST MENU:
================
1.INSERT:
2.DIPLAY:
3.DELETE
4.EXIT
ENTER THE CHOICE:2
INSERT ELEMENTS ARE:10 20
LIKED LIST MENU:
================
1.INSERT:
2.DIPLAY:
3.DELETE
4.EXIT
ENTER THE CHOICE:3
ENTER THE POSITION:1
DELETE SUCESSFULLY
LIKED LIST MENU:
================
1.INSERT:
2.DIPLAY:
3.DELETE
4.EXIT
ENTER THE CHOICE:2
INSERT ELEMENTS ARE:10
LIKED LIST MENU:
================
1.INSERT:
2.DIPLAY:
3.DELETE
4.EXIT
ENTER THE CHOICE:
/*/