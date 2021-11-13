#include<stdio.h>
#include <stdlib.h>

int main(int argc,char**argv)
{
    int product=0;
    if (argc<3) {
    printf("too few arguments");
    }
    else if (argc>3) {
    printf("too many arguments");
    }
    else {
        int a=atoi(argv[1]);
        int b=atoi(argv[2]);
        product=(a*b);
        printf("product is equal to %d\n",product);
    
    }
 
}