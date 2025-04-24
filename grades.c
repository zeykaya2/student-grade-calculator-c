#include <stdio.h>

#define MAX 100

float calculateAverage(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

int main() {
    int studentCount;
    float grades[MAX][3], average[MAX];

    printf("Enter number of students: ");
    scanf("%d", &studentCount);

    for (int i = 0; i < studentCount; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Enter grade %d: ", j + 1);
            scanf("%f", &grades[i][j]);
        }
        average[i] = calculateAverage(grades[i][0], grades[i][1], grades[i][2]);
    }

    printf("\n--- Report ---\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Student %d - Average: %.2f - %s\n", i + 1, average[i],
               average[i] >= 60 ? "Passed" : "Failed");
    }

    return 0;
}
