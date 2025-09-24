#include <stdio.h>

int main() {
    float scores[3][3]; // [student][subject]
    float sum_subject[3] = {0, 0, 0};
    float sum_student[3] = {0, 0, 0};
    char *subjects[] = {"Math", "Physics", "Chemistry"};
    int i, j;

    // รับคะแนน
    for(i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i+1);
        for(j = 0; j < 3; j++) {
            printf("%s: ", subjects[j]);
            scanf("%f", &scores[i][j]);
            sum_student[i] += scores[i][j];
            sum_subject[j] += scores[i][j];
        }
    }

    // แสดงตารางคะแนน
    printf("\nScore Table:\n");
    printf("Student   Math   Physics   Chemistry\n");
    for(i = 0; i < 3; i++) {
        printf("%d      ", i+1);
        for(j = 0; j < 3; j++) {
            printf("%6.2f", scores[i][j]);
        }
        printf("\n");
    }

    // แสดงคะแนนรวมแต่ละคน
    printf("\n");
    for(i = 0; i < 3; i++) {
        printf("Total score for Student %d = %.2f\n", i+1, sum_student[i]);
    }

    // แสดงค่าเฉลี่ยแต่ละวิชา
    printf("\nAverage per subject:\n");
    for(j = 0; j < 3; j++) {
        printf("%s: %.2f\n", subjects[j], sum_subject[j]/3.0);
    }

    return 0;
}