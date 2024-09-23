//newton rapson
#include<stdio.h>
#include<math.h>

float f(float x)
{
	return ((x*x*x)-12);
}

float df(float x)
{
	return 3*x*x;
}

int main()
{
	int max_itr=0,count=0;
	float x0=0,x1=0,f0=0,df0=0,f1=0,e=0;
	printf("enter your assumption for x0\n");
	scanf("%f",&x0);
	printf("\nEnter allowed error\n");
	scanf("%f",&e);
	printf("\nEnter allowed max steps\n");
	scanf("%d",&max_itr);
	f0=f(x0);
	df0=df(x0);
	do
	{
		if(df0==0)
		{
			printf("\nmethod fail\n");
			break;
		}
		x1=x0-(f0/df0);
		x0=x1;
		f0=f(x0);
		df0=df(x0);
	}while(fabs(df(x1))<e);
	printf("\nthe final assumption is %f\n",x0);
}
