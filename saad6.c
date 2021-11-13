#include <alloca.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *array = (int *)malloc(1 * sizeof(int));
  int size = 1 ;
  int var = 0;
  printf("enter values for array\n");
  printf("if you want to stop the input enter -99\n\n ");
  printf("please enter a value\n");
  scanf("%d", &var);
  array[size-1] = var;

  while (var != -99) {
    printf("please enter a value\n");
    scanf("%d", &var);
    if (var == -99) {
      break;
    }
    size++;
    array = (int *)realloc(array, size);
    array[size - 1] = var;
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
  printf("second min= %d",array[2]);
  return 0;
}