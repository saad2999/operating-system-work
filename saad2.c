#include<stdio.h>

int main()
{
 
 int s1,s2,s3;
 printf("enter 1st side of triangle:\n");
 scanf("%d",&s1);
  printf("enter 2st side of triangle:\n");
 scanf("%d",&s2);
 printf("enter 3rd side of triangle:\n");
 scanf("%d",&s3);
 if (s1==s2 && s2==s3)
 {
     printf("Equilateral triangle\n");
 }
 else if (s1==s2 || s2==s3)
 {
     printf("Isosceles triangle\n");
 }
 else
    printf("Scalene triangle\n");

 
 
 
 
    return 0;
}