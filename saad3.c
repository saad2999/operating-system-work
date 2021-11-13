#include<stdio.h>




int main()
{ 
    int size=20;
    int array[size];
    int input=0;
    int len=0;
     for (int i=0;i<size;i++)
    {
        array[i]=2000;
    }
    
    printf("enter 20 values for array or give -99 to stop intput \n");
    for (int i=0;i<size;i++)
    {
        printf("enter value for index %d:",i+1);
        scanf("%d",&input);
        if (input==-99) 
        {
            break;
        
        }
        array[i]=input;
        len++;
    }
    for(int r=0;r<size;r++)
    {
        for(int i=0; i<size;i++)
        {
            int temp=0;
            if(array[i]>array[i+1])
            {
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
    printf("output\n\n");
    for (int i=0;i<len;i++)
    {
        printf("enter value on index %d is %d:\n",i,array[i]);
         
    }

    
    return 0;
}