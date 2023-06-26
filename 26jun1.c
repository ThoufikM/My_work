#include<stdio.h>
int main()
{
    char n[20];
    printf("ENTER THE STRING:");
    scanf("%s",&n);

    printf("YOUR STRING:%s\n",n);

    for(int i = 0; n[i] != '\0'; i++)
    {
        printf("YOUR STRING IS ONE BYE ONE:%c\n",n[i]);
    }
}

/*OUTPUT:
ENTER THE STRING:HELLO THIS IS STRING
YOUR STRING:HELLO
YOUR STRING IS ONE BYE ONE:H
YOUR STRING IS ONE BYE ONE:E
YOUR STRING IS ONE BYE ONE:L
YOUR STRING IS ONE BYE ONE:L
YOUR STRING IS ONE BYE ONE:O
 */