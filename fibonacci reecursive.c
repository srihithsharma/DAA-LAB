#include <stdio.h>

int main() {
    int n;
    long long a = 0, b = 1, nextTerm;

    printf("Enter the term (n): ");
    scanf("%d", &n);

    // Handling 0th and 1st term as per the definition in your PDF
    if (n == 0) {
        printf("fib(0): 0\n");
    } else if (n == 1) {
        printf("fib(1): 1\n");
    } else {
        // Loop starts from 2 because 0 and 1 are already defined
        for (int i = 2; i <= n; i++) {
            nextTerm = a + b;
            a = b;
            b = nextTerm;
        }
        printf("fib(%d): %lld\n", n, b);
    }

    return 0;
}
