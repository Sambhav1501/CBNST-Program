//regular falsi
#include<stdio.h>
#include<math.h>

float f(int x)
{
	return (x*x)*(exp(-x/2))-1;
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
	if(f0*f1>0)
    {
		printf("f(x0)*f(x1)>0, please choose another pair of approximations\n");
    }
    do
    {
    	if(f(x0)*f(x1)>0)
        {
            printf("fail condition met");
            break;
        }
        x2=x1-((x1-x0)/(f1-f0))*f0;
        printf("x = %f\n",x2);
        step++;
        f2=f(x2);
        // Update the guesses based on the sign of f(x2)
        if (f0 * f2 < 0) 
	{
            x1 = x2;
            f1 = f2;
        } 
	else 
	{
            x0 = x2;
            f0 = f2;
        }
    }while(fabs(f2)>error);
    printf("root is %f",x2);
	return 0;
}
