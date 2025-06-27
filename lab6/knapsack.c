#include <stdio.h>

struct Item {
    int value;
    int weight;
};

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(struct Item items[], int n, int W) {
    int i, w;
    int K[n + 1][W + 1];

    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (items[i - 1].weight <= w)
                K[i][w] = max(items[i - 1].value + K[i - 1][w - items[i - 1].weight], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}

int main() {
    struct Item items[] = {{60, 10}, {100, 20}, {120, 30}};
    int n = sizeof(items) / sizeof(items[0]);
    int W = 50; 

    int max_value = knapsack(items, n, W);
    printf("Maximum value in Knapsack = %d\n", max_value);

    return 0;
}
