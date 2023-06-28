#include<stdio.h>
#include<stdlib.h>
struct mynode 
{
    int data;
    struct mynode* next;
    struct mynode* back; 
};
typedef struct mynode n;
n* tail = NULL;
n* head = NULL;
void insert(int pos,int val)
{
    n* newnode = (n*)malloc(sizeof(n));
    newnode -> data = val;
    if(pos == 0)
    {
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            newnode->back = NULL;
            newnode->next = NULL;
        }
        else
        {
            newnode -> next = head;
            head -> back = newnode;
            head = newnode;
            newnode -> back = NULL;
        }
    }
    else
    {
        int i;
        n* temp = head;
        for(i = 1 ; i < pos ; i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("LIST IS EMPTY");
            }
        }
        newnode -> next = temp ->next;
        if(temp -> next == NULL)
        {
            tail = newnode;
        }
        else
        {
            temp -> next -> back = newnode;
        }
        temp -> next = newnode;
        newnode -> back = temp;
        

    }
    printf("\nINSERTED ELEMENT %d AT POSITION %d\n",val,pos);
}
void display()
{
    
    if(head == NULL)
    {
        printf("LIST IS EMPTY");
    }
    n* temp = head; 
    printf("\nLIST ELEMENTS ARE: ");
    while(temp != NULL)
    {
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
}
void displayRev()
{
    
    if(tail == NULL)
    {
        printf("LIST IS EMPTY");
    }
    n* temp = tail; 
    printf("\nLIST ELEMENTS IN REVERSE ");
    while(temp != NULL)
    {
        printf("%d ",temp -> data);
        temp = temp -> back;
    }

}
void del(int pos)
{
    int i;
    n* temp = head;
    n* back;
    if(head== NULL)
    {
        printf("LIST IS EMPTY");
        return;
    }
    if(pos == 0)
    {
        head = head->next;
        printf( "DELETED ELEMENT :%d",temp -> data);
        free(temp);
    }
    else
    {
        for(i = 1 ;i <=pos;i++)
        {
            back = temp;
            temp = temp->next;
            if(temp == NULL)
            {
                printf("INVALIED POSITION");
                return;
            }
        }
        back -> next = temp  -> next;
        if(temp->next == NULL)
        {
            tail = back;
        }
        else
        {
            temp->next->back = back;
        }
       
        printf("DELETE ELEMENTS :%d",temp->data);
        free(temp);
    }
}

int main()
{
    insert(0,10);
    insert(1,20);
    insert(2,30);
    insert(1,15);
    insert(3,25);
    del(4);
    del(2);

    display();
    displayRev();

}
/*INSERTED ELEMENT 10 AT POSITION 0

INSERTED ELEMENT 20 AT POSITION 1

INSERTED ELEMENT 30 AT POSITION 2

INSERTED ELEMENT 15 AT POSITION 1

INSERTED ELEMENT 25 AT POSITION 3
DELETE ELEMENTS :30DELETE ELEMENTS :20
LIST ELEMENTS ARE: 10 15 25 
LIST ELEMENTS IN REVERSE 25 15 10 */