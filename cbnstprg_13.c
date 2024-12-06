//eulers method
#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
    return ((y-x)/(y+x));
}

int main()
{
    float x1,x,y;
    int n;
    printf("Enter initial values x,y\n");
    scanf("%f%f",&x,&y);
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the value of x\n");
    scanf("%f",&x1);
    float h=x1/(float)n;
    printf("h:%f\n",h);
    float yn[n+1];
    float xn[n+1];
    yn[0]=y;
    xn[0]=x;
    //applying formula
    for(int i=1;i<=n;i++)
    {
        xn[i]=xn[i-1]+h;
    }
    for(int i=1;i<=n;i++)
    {
        yn[i]=yn[i-1]+(h*f(xn[i-1],yn[i-1]));
    }
    printf("For x=%f, y=%f",x1,yn[n]);
}
