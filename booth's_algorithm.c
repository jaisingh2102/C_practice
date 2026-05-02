#include <stdio.h>

int main() {
    int m, q, a = 0;   // M = multiplicand, Q = multiplier, A = accumulator
    int q1 = 0;        // Q-1
    int n, i;

    printf("Enter multiplicand (M): ");
    scanf("%d", &m);

    printf("Enter multiplier (Q): ");
    scanf("%d", &q);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int q0 = q & 1;

        // Decision based on Q0 and Q-1
        if (q0 == 1 && q1 == 0) {
            a = a - m;
        } else if (q0 == 0 && q1 == 1) {
            a = a + m;
        }

        // Arithmetic Right Shift (A, Q, Q-1)
        int msbA = (a >> (n - 1)) & 1;   // sign bit of A
        q1 = q & 1;                      // update Q-1

        q = (q >> 1) | ((a & 1) << (n - 1));  // shift Q
        a = (a >> 1) | (msbA << (n - 1));     // shift A

        printf("Step %d: A = %d, Q = %d, Q-1 = %d\n", i + 1, a, q, q1);
    }

    // Final result
    int result = (a << n) | (q & ((1 << n) - 1));

    printf("\nResult (A,Q) = %d\n", result);

    return 0;
}