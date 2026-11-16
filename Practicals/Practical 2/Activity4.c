#include <stdio.h>

int main()
{
    int mark;

    printf("Enter mark: ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100)
        printf("Invalid Mark Given");
    else if (mark >= 80)
        printf("Grade is A");
    else if (mark >= 70)
        printf("Grade is B");
    else if (mark >= 45)
        printf("Grade is C");
    else
        printf("Grade is F");

    return 0;
}
 
