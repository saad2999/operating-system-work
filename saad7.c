
#include<stdio.h> 
#include <string.h>
#include <stdlib.h>


struct empolyee
{
    char id[20];
    char name[50];
    int age;
    int pay;

};
void display(struct empolyee obj)
{
    printf("%s\n",obj.id);
    printf("%s\n",obj.name);
    printf("%d\n",obj.age);
    printf("%d\n",obj.pay);
}
void displayptr(struct empolyee* obj)
{
    printf("%s",obj->id);
}


int main()
{
 struct empolyee p1;
 strcpy(p1.id,"emp1");
 strcpy(p1.name,"saad");
 p1.age=18;
 p1.pay=250000;
 display(p1);
struct empolyee  *p = (struct empolyee *)malloc(1 * sizeof(struct empolyee));
strcpy(p->id,"saadptr");
 displayptr(p);
 
}