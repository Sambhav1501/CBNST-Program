//Runge Kutta's Method
#include<stdio.h>

double fun(double x,double y)
{
    return (y*y-x*x)/(y*y+x*x);
}

int main()
{
    double h, xn, x0, y0, k, k1, k2, k3, k4;
    int n;
    printf("Enter x0: ");
    scanf("%lf", &x0);

    printf("Enter y0: ");
    scanf("%lf", &y0);

    printf("Enter h: ");
    scanf("%lf", &h);

    printf("Enter the value of x for which corresponding y to be found: ");
    scanf("%lf", &xn);

    n = (xn - x0) / h;
    double x[n];
    double y[n];
    x[0] = x0, y[0] = y0;
    double ans;
    for (int i = 0; i < n; i++)
    {
        x[i+1] = x[i] + h; // Update x[i+1]
        k1 = h * fun(x[i], y[i]); // Use x[i] and y[i] for calculations
        k2 = h * fun(x[i] + h * 0.5, y[i] + k1 * 0.5);
        k3 = h * fun(x[i] + h * 0.5, y[i] + k2 * 0.5);
        k4 = h * fun(x[i] + h, y[i] + k3);
        k = (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        y[i+1] = y[i] + k; // Update y[i+1]
        ans = y[i+1];
        printf("y(%.2lf) = %.6lf\n", x[i+1], ans); // Format the output
}

    //printf("%f",ans);
}
