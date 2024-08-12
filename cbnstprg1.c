#include<stdio.h>
#include<math.h>

float AbsError(float av)
{
	float tv=22/7;
	float error=fabs( tv-av);
	return error;
}

float ReError(float av)
{
	float tv=22/7;
	float error=(AbsError(av))/tv;
	return error;
}

float PerError(float av)
{
	float error=ReError(av)*100;
	return error;
}

int main()
{
	float av=0;
	scanf("%f",&av);
	float Ae=AbsError(av);
	float Re=ReError(av);
	float Pe=PerError(av);
	printf("%f\n",Ae);
	printf("%f\n",Re);
	printf("%f\n",Pe);
}
