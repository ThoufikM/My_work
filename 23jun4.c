#include<stdio.h>
 int main()
 {
    int array[4] = {10,20,30,40};
    int *ptr;
    int i;
    ptr = array;

    for ( i = 0; i < 4; i++)
    {
        printf("array[%d]:%d\n",i,*(ptr + i));
        printf("array[%d]:%d\n",i,*ptr + i);
    }
    
 }
 /*THE OUTPUT IS:
array[0]:10
array[0]:10
array[1]:20
array[1]:11
array[2]:30
array[2]:12
array[3]:40
array[3]:13
 */