#include <stdio.h>

int main()
{
int mark;
int grade;

printf("Enter the mark: ");
scanf("%d", &mark);

if(mark>100 || mark<0)
{
	printf("Invalid mark");
	return 0;
}

grade = mark/10;

switch (grade)
{
case 10:
case 9:
case 8: 
	printf("Grade A");
	break;
case 7:
	printf("Grade B");
	break;
case 6:
case 5:
case 4:
	if(mark >= 45)
		printf("Grade is C\n");
	else
		printf("Grade is F\n");
	break;
default:
	printf("Grade F");
}
return 0;
}


