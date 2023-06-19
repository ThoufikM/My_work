//structure pointer printing address
#include<stdio.h>
int main()
{
    struct student
    {
        char name[10];
        int age;
        float weight;
    };
    struct student s = {"THOUFIK",20,69};
    struct student *p = &s;

    printf("NAME:%p\n",(*p).name);
    printf("AGE:%p\n",(*p).age);
    printf("WEIGHT:%p\n",(*p).weight);


}