#include<stdio.h>
#include<stdlib.h>
int SumOfOdd(int *arr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            sum=sum+arr[i];
        }
    }
    return sum;
}
int find_maximum(int *arr,int size)
{
    int maximum=arr[0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[j]>maximum)
            {
                maximum=arr[j];
            }
        }
    }
    return maximum;
    
}
int main (int argc,char**argv)
{
int count = argc-1;
    int *array=(int*) malloc(count*sizeof(int));
    for(int i=1;i<argc;i++)
    {
        array[i-1]=atoi(argv[i]);
        
    }
    int input;
    int maximum=find_maximum(array,  count);
    int sum =SumOfOdd(array,count);
    printf("Total CPU available is 0-%d\n",(maximum+1));
    printf("Enter CPU # =");
    scanf("%d",&input);
    printf("Sum of odd numbers = %d\n",sum);
    return 0;
}