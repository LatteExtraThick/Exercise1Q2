#include <stdio.h>

int main() {
    int q1, q2, q3, mid, final;
    printf("=======Quizzes===============\n");
    printf("Enter the score of the first quiz: ");
    scanf("%d", &q1);
    printf("Enter the score of the second quiz: ");
    scanf("%d", &q2);
    printf("Enter the score of the third quiz: ");
    scanf("%d", &q3);

    printf("=======Mid-term==============\n");
    printf("Enter the score of the mid-term: ");
    scanf("%d", &mid);

    printf("=======Final=================\n");
    printf("Enter the score of the final: ");
    scanf("%d", &final);

    int quizTotal = q1 + q2 + q3;
    int total = quizTotal + mid + final;

    printf("Quiz Total: %d\n", quizTotal);
    printf("Mid-term: %d\n", mid);
    printf("Final: %d\n", final);
    printf("……………………\n");
    printf("Total: %d\n", total);
    return 0;
}