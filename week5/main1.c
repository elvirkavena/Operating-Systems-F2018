#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// A normal C function that is executed as a thread
// when its name is specified in pthread_create()
void *myThreadFun(void* data)
{
printf("HelloWorld from Thread with id %ld  \n", (long)data);
return NULL;
}
pthread_t thread_seq[5];
pthread_t thread_parall[5];

int main()
{
printf("Sequential\n");
for (int i = 0; i < 5; i++)
{
pthread_create(&thread_seq[i], NULL, myThreadFun, (void *)pthread_self());
pthread_join(thread_seq[i], NULL);
}
printf("Parallel\n");
for (int i = 0; i < 5; i++)
{
pthread_create(&thread_parall[i], NULL, myThreadFun, (void *)pthread_self());
}
for (int i = 0; i < 5; i++)
{
pthread_join(thread_parall[i], NULL);
}
exit(0);
}
