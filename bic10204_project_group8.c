#include <stdio.h> //Program is created for the purpose of calculating a user's BMR & DCR.
int main()

{
	char name[20];
	char gender;
	char activity_level;
	int age;
	float weight, height, BMR, DCR;
	
	printf("Enter name: ");
	gets(name);
	printf("\nEnter age: ");
	scanf("%d", &age);
	printf("\nEnter weight in kg: ");
	scanf("%f", &weight);
	printf("\nEnter height in cm: ");
	scanf("%f", &height);
	
	fflush(stdin); //Used to clear input buffer so that user can enter data smoothly
	
	printf("\nEnter gender (M/F): ");
	gender = getchar();
	
 	printf("\nThis is Level of Activity: \nS:\tlittle or no exercise, desk job\nL:\tlight exercise, 1-3 days workout");
	printf("\nM:\tmoderate exercise, 3-5 days workout\nV:\thard exercise, 6-7 days workout");
	printf("\nE:\thard daily exercise & physical job or 2 times a day training");
 	
 	fflush(stdin);
 	
 	printf("\n\nEnter level of activity (S/L/M/V/E): "); 
 	activity_level = getchar();
		
	if(gender == 'M' || gender == 'm') //The program will still accept lower case letter
	{
		BMR = 66 + (13.7 * weight) + (5 * height) - (6.8 * age);
	}
	else if (gender == 'F' || gender == 'f')
	{
		BMR = 655 + (9.6 * weight) + (1.8 * height) - (4.7 * age);
	}
	else 
	{
		BMR = 0; // No calculation. This value will be presented for incorrect input. 
	} 
	
	
 	if(activity_level == 'S' || activity_level == 's')
 	{
 		DCR = BMR * 1.2;
	}
	else if (activity_level == 'L' || activity_level == 'l')
	{
		DCR = BMR * 1.375;
	}
	else if (activity_level == 'M' || activity_level == 'm')
	{
		DCR = BMR * 1.55;
	}
	else if (activity_level == 'V' || activity_level == 'v')
	{
		DCR = BMR * 1.725;
	}
	else if (activity_level == 'E' || activity_level == 'e')
	{
		DCR = BMR * 1.9;
	}
	else
	{
		DCR = 0; // No calculation. This value will be presented for incorrect input.
	}

	
	
	printf("\nName\t: ");
	fputs(name, stdout);
	
	printf("\nAge\t: %d", age);
	printf("\nWeight\t: %0.2f", weight);
	printf("\nHeight\t: %0.2f", height);
	
	switch(gender)
	{
		case 'f':
		case 'F':
			printf("\nGender\t: Female");
			break;
		case 'm':
		case 'M':
			printf("\nGender\t: Male");
			break;
		default: printf("\nGender\t: Invalid gender!");
	}
	
	switch(activity_level)
	{
		case 's':
		case 'S':
			printf("\nLevel of Activity : Sedentary");
			break;
		case 'l':
		case 'L':
			printf("\nLevel of Activity : Light Activity");
			break;
		case 'm':
		case 'M': 
			printf("\nLevel of Activity : Moderate Activity");
			break;
		case 'v':
		case 'V':
			printf("\nLevel of Activity : Very Active");
			break;
		case 'e':
		case 'E':
			printf("\nLevel of Activity : Extra Active");
			break;
		default: printf("\nLevel of Activity is not found");
	}
	
	
	printf("\nBMR\t: %0.0f", BMR);
	printf("\nDCR\t: %0.0f", DCR);
	printf("\nNote\t: Based on this calculation, you would need %0.0f calories from food to sustain your daily activities", DCR);
	
}
