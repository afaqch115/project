#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int array[1000];
int chunk_size=100;

void *sumarr(void *arg)
{
    int start=(int)arg;
    int end=start+chunk_size;
    int sum=0;
    for(int i=start;i<end;i++)
    {
        sum+=array[i];
    }
    return ((void*)sum);
}

int main()
{

    
    
    int num[10];
    pthread_t p_thread[10];
    for(int i=0;i<1000;i++)
    	{
        	array[i]=i+1;
    	}

    for(int i=0;i<10;i++)
    	{
        	pthread_create(&p_thread[i],NULL,sumarr,(void*)(i*chunk_size));
    	}

    for(int i=0;i<10;i++)
    	{
        	pthread_join(p_thread[i],(void**)&num[i]);
    
    	}

    int tsum=0;

    for(int i=0;i<10;i++)
    	{
        	printf("sum %d : %d \n",i+1,num[i]);
        	tsum+=num[i];
    	}
    printf("Total Sum : %d \n",tsum);
}
