#include <stdio.h>

/* Print a table of Fahrenheit to Celcius
 * 0, 20, 40, 60, ... 300*/

int main() {
    float F, C;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    F = lower;
    step = 20;

    while (F <= upper) {
        C = (5.0/9.0) * (F - 32.0);
        F += step;
        printf("%6.1f %3.2f \n", F, C);
    }
}
