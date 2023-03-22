#include <stdio.h>

int main() {
    double P1, P2, P3, A;
    scanf("%lf %lf %lf %lf", &P1, &P2, &P3, &A);

    double prob1 = (A >= P1) ? 0.333 : 0.0;
    double prob2 = (A >= P2) ? 0.333 : 0.0;
    double prob3 = (A >= P3) ? 0.333 : 0.0;

    double sum = prob1 + prob2 + prob3;
    if (sum > 0.0) {
        prob1 /= sum;
        prob2 /= sum;
        prob3 /= sum;
    }
    printf("%.3lf\n", prob1);
    printf("%.3lf\n", prob2);
    printf("%.3lf\n", prob3);

    return 0;
}
