//Newton forward interpolation
#include<stdio.h>
#include<math.h>

int main()
{
    int n,poi;
    printf("enter total no of arguments");
    scanf("%d",&n);
    int x[n],y[n][n];
    printf("enter x and y values");
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&x[i],&y[i][0]);
    }
    for(int j=1;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",x[i]);
        for(int j=0;j<n;j++)
        {
            printf("\t%d",y[i][j]);
        }
        printf("\n");
    }
    printf("enter point of interpolation");
    scanf("%d",&poi);
    double p=1.0,sum=y[0][0];
    double u=((poi-x[0]*1.0)/(x[1]-x[0])*1.0);
    for(int j=1;j<n;j++)
    {
        p=p*(u-j+1)/j;
        sum=sum+p*y[0][j];
    }
    printf("sum=%f",sum);
    return 0;
}
