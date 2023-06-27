#include<stdio.h>
#define M 10
int stack[M];
int top = -1;

void push(int val)
{
    if(top == M-1)
    {
        printf("STACK IS FULL");
        return;
    }
    else{
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("STACK IS EMPTY");
        return;
    }
    else
    {
        printf("POPED ELEMENT %d\n",stack[top]);
        top--;
    }
}
void display() {
   if(top == -1)
      printf("Stack is empty!");
   else {
      int i;
      printf("Stack elements are:\n");
      for(i=0; i<=top; i++)
         printf("%d\n",stack[i]);
   }
}

int main()
{
    int choice,val;
    
    while(1)
    {
    printf("STACK MENU:\n");
    printf("==========\n");
    printf("1.PUSH\n2.POP()\n3.DIPALY\n");
    printf("ENTER THE CHOICE:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 : printf("ENTER THE PUSH ELEMENT:");
        scanf("%d",&val);
        push(val);
        break;
        case 2 : pop();
        break;
        case 3 : display();
        break;
    }
    }
}
/*OUTPUT:
STACK MENU:
==========
1.PUSH
2.POP()
3.DIPALY
ENTER THE CHOICE:1
ENTER THE PUSH ELEMENT:10
STACK MENU:
==========
1.PUSH
2.POP()
3.DIPALY
ENTER THE CHOICE:1
ENTER THE PUSH ELEMENT:11
STACK MENU:
==========
1.PUSH
2.POP()
3.DIPALY
ENTER THE CHOICE:1
ENTER THE PUSH ELEMENT:12
STACK MENU:
==========
1.PUSH
2.POP()
3.DIPALY
ENTER THE CHOICE:3
Stack elements are:
10
11
12
STACK MENU:
==========
1.PUSH
2.POP()
3.DIPALY
ENTER THE CHOICE:2
POPED ELEMENT 12
STACK MENU:
==========
1.PUSH
2.POP()
3.DIPALY
ENTER THE CHOICE:3
Stack elements are:
10
11*/