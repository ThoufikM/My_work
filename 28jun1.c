#include<stdio.h>
#include<stdlib.h>
struct lnode
{
    int data;
    struct lnode* next;
};
typedef struct lnode node;
node* head = NULL;

void insert(int pos,int val)
{
    node* temp = head;
    node* newnode =(node*)malloc(sizeof(node));
    newnode ->data = val;
    if(pos == 0)
    {
        if(head == NULL)
        {
            newnode-> next = NULL;
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    else
    {
        for(int i = 1;i < pos; i++)
        {
            temp = temp->next;
            if(temp ==  NULL)
            {
                printf("INVALIED POSITION");
                return;
            }
        }
        newnode->next  = temp->next;
        temp->next = newnode;
    }
   printf("INSERT THE VALUE OF : %d",val);
}
void del(int pos)
{
    node* temp = head;
    node* prev;
    if(head == NULL)
    {
        printf("IVALIED POSITION");
        return;
    }
    if(pos == 0)
    {
        head = (*head).next;
        printf("DELETED SUCESSFULLY");
        free(temp);
        return;
    }
    
    for(int i = 0 ; i < pos ; i++)
    {
        prev = temp;
        temp = temp->next;
        if(temp == NULL)
        {
            printf("INVALIED POSITION");
            return;
        }
    }
    prev->next = temp -> next;
    printf("DELETED SUCESSFULL THE VALUE IS:%d",temp->data);
    free(temp);

}
void display()
{
    
    if(head == NULL)
    {
        printf("LIST IS EMPTY");
        return;
    }
    node* temp = head;
    printf("INSERTED ELEMENTS ARE:");
    while(temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
    
}


int main()
{
    int choice,val,pos;
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

        switch (choice)
        {
        case 1 : printf("ENTER THE POSITION:");
        scanf("%d",&pos);
        printf("ENTER THE DATA:");
        scanf("%d",&val);
        insert(pos,val);
        break;
        case 2 : display();
        break;
        case 3 : printf("ENTER THE POSITION:");
        scanf("%d",&pos);
        del(pos);
        default:
            break;
        }
    }

}