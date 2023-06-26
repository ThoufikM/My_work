#include<stdio.h>
#include<stdlib.h>
struct tnode
{
    int data;
    struct tnode* next;
};

typedef struct tnode node;
node* head = NULL;
void insert(int val)
{
    node* newnode = (node*)malloc(sizeof(node));
    if(newnode == NULL)
    {
        printf("OUT OF MEMORY");
        return;
    }
    (*newnode).data  = val; 
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
    printf("INSERT THE ELEMENT IS %d",val);
}
void dispaly()
{
    if(head == NULL)
    {
        printf("NODE IS EMPTY");
    }
    node* temp = head;

    while(temp != NULL)
    {
        printf("%d\n",(*temp).data);
        temp = (*temp).next;
    }
}
int main()
{
    int choice,val;
    while(1)
    {
        printf("\nLIKED LIST MENU:\n");
        printf("================\n");
        printf("1.INSERT:\n");
        printf("2.DIPLAY:\n");
        printf("3.EXIT\n");
        printf("ENTER THE CHOICE:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("ENTER THE DATA:");
            scanf("%d",&val);
            insert(val);
            break;
            case 2 : dispaly();
            break;
            case 3 : exit(0);
            break;
        }
    }
}