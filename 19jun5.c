// passing structure pointer to function and modify the value too
#include<stdio.h>
 struct student
    {
        char name[10];
        int age;
        float weight;
    };    

void fun(struct student*);

int main()
{
    struct student s = {"THOUFIK",20,69};
    struct student *p = &s;
    fun(p);

    printf("WEIGHT:%f",s.weight);

    return 0;
}

void fun(struct student *Thoufik)
{
    printf("NAME:%s\n",Thoufik->name);
    printf("AGE:%d\n",Thoufik->age);
    printf("WEIGHT:%f\n",Thoufik->weight);
 
    Thoufik->weight = 68;
}