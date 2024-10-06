//iteration method
#include <stdio.h>
#include <math.h>

#define g(x) (1 / exp(x)) 

int main() {
    float x0, x1, error;
    int max_steps, step = 0;

    printf("Enter initial approximation x0: ");
    scanf("%f", &x0);
    printf("Enter allowed error: ");
    scanf("%f", &error);
    printf("Enter allowed max steps: ");
    scanf("%d", &max_steps);

    do {
        x1 = g(x0); // Update the current guess
        printf("Step %d: x1 = %f\n", step + 1, x1);

        // Check for convergence
        if (fabs(x1 - x0) < error) {
            break;
        }

        x0 = x1; // Update x0 for the next iteration
        step++;
    } while (step < max_steps);

    if (step >= max_steps) {
        printf("Max steps reached without convergence.\n");
    } else {
        printf("Root is approx: %f\n", x1);
    }

    return 0;
}
