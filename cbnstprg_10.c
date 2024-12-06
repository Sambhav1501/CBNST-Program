//Trapezoidal Rule
#include <stdio.h>
#include <math.h>

double func(double x)
{
    return (1/(1+x*x));
}

int main()
{
    int n, a, b;
    printf("\nEnter number of intervals: ");
    scanf("%d", &n);
    printf("Enter lower limit(a): ");
    scanf("%d", &a);
    printf("Enter upper limit(b): ");
    scanf("%d", &b);
    double h = (b - a) / (float)n;
    double x[n + 1];
    double y[n + 1];
    int count = 0;
    printf("\nx\t\ty\n");
    for (int i = 0; i <= n; i++)
    {
        x[i] = a + (count * h);
        count++;
        y[i] = func(x[i]);
        printf("%f\t%f\n", x[i], y[i]);
    } 
    //applying formula
    double sum = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        sum += y[i];
    }
    double ans = (h / 2) * (y[0] + y[n] + 2 * sum);
    printf("\nApproximate value of integration is: %f \n", ans);
}
