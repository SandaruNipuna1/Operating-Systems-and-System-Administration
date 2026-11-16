#include <stdio.h>

int main()
{
int choice;

printf("Enter the choice:\n");
printf("1. print \"Hello\"\n");
printf("2. print \"Welcome\"\n");
printf("3. print \"Goodbye\"\n");

scanf("%d", &choice);

switch (choice){
	case 1: printf("Hello");
	break;
	case 2: printf("Welcome");
	break;
	case 3: printf("Goodbye");
	break;
	default: printf("Invalid Choice!");
	}
return 0;
}

