#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include <time.h>
void* saad(void* arg)
{
    while(1)
    {
        
        printf("saad\n");
        sleep(1);
        
    }
    return NULL;
}
void maaz()
{
    while(1)
    {
        sleep(1);
        printf("maaz\n");
    }
}

int main()
{
 printf("start\n");
 pthread_t newthread;
 pthread_create(&newthread,NULL,saad,NULL);
 maaz();
 return 0;
}
