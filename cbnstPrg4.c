//secant method
#include<stdio.h>
#include<math.h>

float f(int x)
{
	return (x*x*x)-(5*x)+1;
}

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
	if(f0==f1)
	{
		printf("fail condition met");
	}
	else
	{
		do
		{
			if(f0==f1)
			{
				printf("f0=f1 fail condition");
				break;
			}
			printf("x");
			x2=x1-((x1-x0)/(f1-f0))*f1;
			f2=f(x2);
			if(f2<error||(step>max_steps))
            break;
			f0=f1;
			f1=f2;
			x0=x1;
			x1=x2;
			step++;
		}while(fabs(f2)>error);
	}
	printf("root is %f",x2);
	return 0;
}
