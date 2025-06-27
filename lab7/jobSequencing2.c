//sequence jobs according to the profit

#include <stdio.h>
#include <stdbool.h>

typedef struct Job {
    char id;
    int dead;
    int profit;
} Job;

// Bubble Sort
void sort(Job jobs[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (jobs[j].profit < jobs[j + 1].profit) {
                Job temp = jobs[j];
                jobs[j] = jobs[j + 1];
                jobs[j + 1] = temp;
            }
        }
    }
}

//sequencing
void Sequencing(Job jobs[], int n) {
    sort(jobs, n);

    int buff[n];
    bool slot[n];

    for (int i = 0; i < n; i++)
        slot[i] = false;
    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].dead - 1; j >= 0; j--) {
            if (slot[j] == false) {
                buff[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    printf("\n\nmaximum profit sequence is:\n");
    for (int i = 0; i < n; i++)
        if (slot[i]){
            printf("\n%c: ", jobs[buff[i]].id);
            printf("profit is: ");
            printf("%d ", jobs[buff[i]].profit);
        }
    printf("\n");
}

int main() {
    Job jobs[] = { {'u', 9, 50}, {'v', 4, 29}, {'w', 7, 21},
                 {'x', 1, 55}, {'y', 6, 54} };
    int n = sizeof(jobs) / sizeof(jobs[0]);

    Sequencing(jobs, n);

    return 0;
}
