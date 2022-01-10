#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define Read 0
#define Write 1
int main(int argc,char**argv)
{
   int fd1[2],fd2[2],fd3[2],fd4[2];
   pipe(fd1),pipe(fd2),pipe(fd3),pipe(fd4);
   int count = argc-1;
    int *array=(int*) malloc(count*sizeof(int));
    for(int i=1;i<argc;i++)
    {
        array[i-1]=atoi(argv[i]);
        
    }
    int x=fork();
    if (x>0) {
  
    }


}