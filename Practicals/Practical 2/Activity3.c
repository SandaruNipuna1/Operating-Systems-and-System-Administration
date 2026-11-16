#include <stdio.h>

int main()
{
char gender;
int age;

printf("Enter the Gender(M/F): ");
scanf("%c", &gender);

printf("Enter the Age: ");
scanf("%d", &age);

if(gender == 'M' || gender == 'm' && age >= 65)
	printf("Senior Male citizen");
else if(gender == 'F' || gender == 'f' && age >=65)
	printf("Senior Female citizen");
else
	printf("Not a senior citizen");
return 0;
}
