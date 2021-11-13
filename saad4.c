#include<stdio.h>
#include <stdbool.h>


void CheckPrime(int n)
{
 bool isprime=1;
 for (int i=2; i<n; i++)
{
    if (n%i==0) 
    {
        isprime=0;
    }
 
}
if (isprime)
{
    printf("prime number");
}
else 
{
printf("not prime number");
}

}
int main()
{
    int num=0;
 printf("enter a number\n");
 scanf("%d",&num);
 CheckPrime(num);
return 0;
}