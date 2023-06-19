// fuction returning structure pointer
#include<stdio.h>
#include<stdlib.h>
 struct student
    {
        int age;
        float weight;
    };    

struct student* gaf();

int main()
{
    struct student *s = gaf();
    printf("AGE   :%d\n",s->age);
    printf("WEIGHT:%f\n",s->weight);

    free(s);
    
    return 0;
}

struct student* gaf()
{
    struct student *Thoufik = malloc(sizeof(struct student));
    Thoufik->age = 20;
    Thoufik->weight = 68;

    return Thoufik;
}