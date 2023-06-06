#include<stdio.h>
union number
{
    int n1;
    int n2;
    int n3;
};

int  main()
{
    union number T;
    T.n1 = 10;
    printf("N1 VALUE :%d\n",T.n1);
    T.n2 = 50;
    printf("N2 VALUE :%d\n",T.n2);
    T.n3 = 60;
    printf("N3 VALUE :%d\n",T.n3);
   
    
    

    if(T.n1 > T.n2)
        printf("N1 IS BIG");
    else if(T.n2 > T.n3)
        printf("N2 IS BIG");
    else
        printf("N3 IS BIG");

    return 0;

    
    
}
