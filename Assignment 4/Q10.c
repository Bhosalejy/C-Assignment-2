//year is leap or not

#include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
	{
        return 1; // Leap year
    }
	else
	{
        return 0; // Not a leap year
    }
}

int daysInMonth(int month, int year) 
{
    int days;

    switch(month) 
	{
        case 1:
            days = 31;
            break;
        case 2:
            if (isLeapYear(year)) 
			{
                days = 29;
            }
			else
			{
                days = 28;
            }
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
    }

    return days;
}

int main() 
{
    int year, month;

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    if (isLeapYear(year)) 
	{
        printf("%d is a leap year.\n", year);
    }
	else
	{
        printf("%d is not a leap year.\n", year);
    }

    printf("Number of days in %dth month of %d is %d.\n", month, year, daysInMonth(month, year));
    

	printf("\n");

    return 0;
}
