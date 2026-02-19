#include <stdio.h>
void firstFit(int weight[], int n, int capacity) {
    int res = 0, bin_rem[100];
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < res; j++) {
            if (bin_rem[j] >= weight[i]) {
                bin_rem[j] -= weight[i];
                break;
            }
        }
        if (j == res) {
            bin_rem[res] = capacity - weight[i];
            res++;
        }
    }
    printf("Bins used: %d", res);
}
