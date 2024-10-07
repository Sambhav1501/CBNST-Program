//lagranges interpolation method
#include<stdio.h>

int main()
{
    int n,poi;
    printf("ENTER no. of arguments : ");
    scanf("%d",&n);
    double x[n],y[n];
    printf("X Y : \n ");
    for(int i=0;i<n;i++)
    {
        scanf("%lf%lf",&x[i],&y[i]);
    }
    printf("ENTER POI : \n");
    scanf("%d",&poi);
    double sum=0.0;
    for(int i=0;i<n;i++)
    {
        double p=1.0;
        for(int j=0;j<n;j++)
        {
            if(j!=i){
                p *= (poi-x[j])/(x[i]-x[j]);
            }
        }
        sum += p*y[i];
    }
    printf("ANS : %f",sum);
    return 0;
}
