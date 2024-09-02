//bisection method 
#include<stdio.h>
#include<math.h>

#define f(x) x*x*x-x-1

int main()
{
	float x0,x1,x2,f0,f1,f2,error;
	int max_steps=0;
	int step=1;
	printf("Enter two approximations x0,x1");
	scanf("%f%f",&x0,&x1);
	printf("Enter allowed error");
	scanf("%f",&error);
	printf("Enter allowed max steps");
	scanf("%d",&max_steps);
	f0=f(x0);
	f1=f(x1);
	
	if(f1*f0>0.0)
	{
		printf("approximate value you took are incorrect");
	}	
	else
	{
		do
		{
			x2=(x0+x1)/2;
			f2=f(x2);
			printf("assigning new roots %d\n",step);
			if(f0*f2<0)
			{
				x1=x2;
				f1=f2;
			}
			else
			{
				x0=x2;
				f0=f2;
			}
			step=step+1;
		}while(fabs(f2)>error);
	}
	printf("root is %f",x2);
	return 0;
}
