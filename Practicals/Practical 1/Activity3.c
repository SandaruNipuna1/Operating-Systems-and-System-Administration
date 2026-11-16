#include <stdio.h>

int main(){
        float exam_marks, homework_marks;
        float Score1, Score2, Overall_Score;

        printf("Enter Exam marks: ");
        scanf("%f", &exam_marks);

        printf("Enter Homework marks: ");
        scanf("%f", &homework_marks);

        Score1 = exam_marks * (50/100);
        Score2 = homework_marks * (50/100);
        Overall_Score = Score1 + Score2;

        printf("Overall Score = %.2f\n", Overall_Score);
        return 0;
}

