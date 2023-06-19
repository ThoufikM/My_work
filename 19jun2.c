//structure pointer
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

    printf("NAME:%s\n",(*p).name);
    printf("AGE:%d\n",(*p).age);
    printf("WEIGHT:%f\n",(*p).weight);


}