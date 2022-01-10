#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define Read 0
 #define Write 1
int main(int argc,char** argv) {
    // int count = argc-1;
    // int *array=(int*) malloc(count*sizeof(int));

    int fd[2];
    int var=8;
    pipe(fd);
     int x=fork();
     int y=fork();
    if (x>0) {
    printf("parent hello\n");
    close(fd[Read]);
    write(fd[Write],&var,sizeof(var));
    }
    if (x==0) {
    printf("child hello\n");
    read(fd[Read],&var,sizeof(var));
    }
    if (y==0) {
    printf("child2 hello\n");
    }

    // for(int i=1;i<argc;i++)
    // {
    //     array[i-1]=atoi(argv[i]);
        
    // }
    // for(int i=0;i<argc-1;i++)
    // {
    //     printf("%d\t",array[i]);
    // }

}