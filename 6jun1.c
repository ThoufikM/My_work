// struct program 
#include<stdio.h>

struct empolyee
{
    char name[20];
    int age;
    int salary;
    int expriance;
};



int main()
{
    struct empolyee E1 = {"THOUFIK",20,15000,1};
    printf("NAME:%s\n",E1.name);
    printf("AGE:%d\n",E1.age);
    printf("SALARY:%d\n",E1.salary);
    printf("EXPRIENCE:%d",E1.expriance);



    

}