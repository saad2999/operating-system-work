#include <alloca.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *array = (int *)malloc(1 * sizeof(int));
  int size = 1, min = 0, secondmin = 0;
  int var = 0;
  printf("enter values for array\n");
  printf("if you want to stop the input enter -99\n\n ");
  printf("please enter a value\n");
  scanf("%d", &var);
  array[0] = var;

  while (var != -99) {
    printf("please enter a value\n");
    scanf("%d", &var);
    if (var == -99) {
      break;
    }
    ++size;
    array = (int *)realloc(array, size);
    array[size - 1] = var;
  }
  if (array[0] < array[1]) {
    min = array[0];
    secondmin = array[1];
  } else {
    min = array[1];
    secondmin = array[0];
  }
  for (int i = 0; i < size; i++) 
  {
    if (min > array[i]) {
      secondmin = min;
      min = array[i];
    } 
    else if (array[i] < secondmin) 
    {
      secondmin = array[i];
    }
  }
  printf("second min= %d",secondmin);

  return 0;
}