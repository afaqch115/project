#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int fd1[2];
	int fd2[2];
	int fd3[2];
	int fd4[2];
	int fd5[2];
	int fd6[2];
	int fd7[2];
	int fd8[2];
	int fd9[2];
	int fd10[2];

	pipe(fd1);
	pipe(fd2);
	pipe(fd3);
	pipe(fd4);
	pipe(fd5);
	pipe(fd6);
	pipe(fd7);
	pipe(fd8);
	pipe(fd9);
	pipe(fd10);

	int size=1000;
	int array[size];
	int i=0 ;

	for(i=0;i<size;i++)
	{
		array[i]=i+1;
	}

	int cpid=fork();
	int sum=0;
	if(cpid==0)
	{
		
		int s=0;
		int e=100;
		for(s=0;s<e;s++)
		{
			sum=sum+array[s];
		}
		write(fd1[1],&sum,sizeof(sum));
		printf("sum 1 is= %d\n",sum);
		
	}

	else
	{
		int cpid1=fork();
	
	if(cpid1==0)
	{
		//int sum=0;
		int s=100;
		int e=200;
		for(;s<e;s++)
		{
			sum=sum+array[s];
		}
		write(fd2[1],&sum,sizeof(sum));
		printf("sum 2 is= %d\n",sum);
	}
	else
	{
		int cpid2=fork();
	
	if(cpid2==0)
	{
		//int sum=0;
		int s=200;
		int e=300;
		for(;s<e;s++)
		{
			sum=sum+array[s];
		}
		write(fd3[1],&sum,sizeof(sum));
		printf("sum 3 is= %d\n",sum);
	}
	
		else
	{
		int cpid3=fork();
	
	if(cpid3==0)
	{
		
		int s=300;
		int e=400;
		for(;s<e;s++)
		{
			sum=sum+array[s];
		}
		write(fd4[1],&sum,sizeof(sum));
		printf("sum 4 is= %d\n",sum);
	}
	
		else
	{
		int cpid4=fork();
	
	if(cpid4==0)
	{
		//int sum=0;
		int s=400;
		int e=500;
		for(;s<e;s++)
		{
			sum=sum+array[s];
		}
		write(fd5[1],&sum,sizeof(sum));
		printf("sum 5 is= %d\n",sum);
	}
	
		else
	{
		int cpid5=fork();
	
	if(cpid5==0)
	{
		//int sum=0;
		int s=500;
		int e=600;
		for(;s<e;s++)
		{
			sum=sum+array[s];
		}
		write(fd6[1],&sum,sizeof(sum));
		printf("sum 6 is= %d\n",sum);
	}
	
		else
	{
		int cpid6=fork();
	
	if(cpid6==0)
	{
		//int sum=0;
		int s=600;
		int e=700;
		for(;s<e;s++)
		{
			sum=sum+array[s];
		}
		write(fd7[1],&sum,sizeof(sum));
		printf("sum 7 is= %d\n",sum);
	}
	
	
		else
	{
		int cpid7=fork();
	
	if(cpid7==0)
	{
		//int sum=0;
		int s=700;
		int e=800;
		for(;s<e;s++)
		{
			sum=sum+array[s];
		}
		write(fd8[1],&sum,sizeof(sum));
		printf("sum 8 is= %d\n",sum);
	}
	
		else
	{
		int cpid8=fork();
	
	if(cpid8==0)
	{
		//int sum=0;
		int s=800;
		int e=900;
		for(;s<e;s++)
		{
			sum=sum+array[s];
		}
		write(fd9[1],&sum,sizeof(sum));
		printf("sum 9 is= %d\n",sum);
	}
	
		else
	{
		int cpid9=fork();
	
	if(cpid9==0)
	{
		//int sum=0;
		int s=900;
		int e=1000;
		for(;s<e;s++)
		{
			sum=sum+array[s];
		}
		write(fd10[1],&sum,sizeof(sum));
		printf("sum 10 is= %d\n",sum);
	}
	
		else
	{
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		wait(NULL);
		
		int sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9,sum10;
		read(fd1[0],&sum1,sizeof(sum1));
		read(fd2[0],&sum2,sizeof(sum2));
		read(fd3[0],&sum3,sizeof(sum3));
		read(fd4[0],&sum4,sizeof(sum4));
		read(fd5[0],&sum5,sizeof(sum5));
		read(fd6[0],&sum6,sizeof(sum6));
		read(fd7[0],&sum7,sizeof(sum7));
		read(fd8[0],&sum8,sizeof(sum8));
		read(fd9[0],&sum9,sizeof(sum9));
		read(fd10[0],&sum10,sizeof(sum10));
		
		int tsum=0;
		tsum=sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10;
		printf("sum is= %d\n",tsum);
		
		
		
	}
	
	}
	
	}
	
	}
	
	}
	
	}
	
	}
	
	}
	
	}
	
	}

	return 0;
}
