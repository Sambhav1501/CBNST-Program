//Simpson's 1/3 Rule
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
        x[i] = a + count * h;
        count++;
        y[i] = func(x[i]);
        printf("%f\t %f\n", x[i], y[i]);
    }
    //applying formula
    double sum_o = 0;
    double sum_e = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        if (i % 2 == 0)
            sum_e += y[i];
        else
            sum_o += y[i];
    }
    double ans = (h / 3) * (y[0] + y[n] + 4 * sum_o + 2 * sum_e);
    printf("\nApproximate value of integration is: %f \n", ans);
}
