
#include<stdio.h>
#include<stdlib.h>
int sum_odd(int arr[],int size)
{
int sum=0;
for(int i=0;i<size;i++)
{
if(arr[i]%2==1)
sum+=arr[i];
}
return sum;
}
int main(int argc, char** argv)
{

for (i = 0; i < argc; ++i){
int num=atoi(argv[i]);
if(max<num) //find max max = num;
//store values in array
arr[i]= num;
}
printf("Total CPU available is 0-%d",(max+1));
printf("\nEnter CPU # =");
int cpu;
scanf("%d",&cpu); //read cpu number
printf("\nCode is running on CPU %d",cpu);
int sum = sum_odd(arr,i);
printf("\n\nSum of odd numbers = %d",sum);
return 0;
}
cod
