//curve fitting 
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    double x[n], y[n], m, c;
    printf("Enter the x and y values:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &x[i]);
        scanf("%lf", &y[i]);
    }
    
    //doing nessesary calculations
    double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }
    //applying formulas
    m = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    c = (sum_y - (m) * sum_x) / n;
    printf("The best-fit line is: y = %fx + %f\n", m, c);

    return 0;
}

