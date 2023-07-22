#include <stdio.h>

/**
 * is_leap_year - Checks if a year is a leap year.
 * @year: The year to be checked.
 *
 * Return: 1 if it's a leap year, 0 otherwise.
 */
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1; /* Leap year */
	else
		return 0; /* Not a leap year */
}

/**
 * day_of_year - Gets the day of the year.
 * @day: The day of the month.
 * @month: The month of the year.
 * @year: The year.
 *
 * Return: The day of the year.
 */
int day_of_year(int day, int month, int year)
{
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int leap_year = is_leap_year(year);

	/* Adjust days in February for leap years */
	days_in_month[2] = 28 + leap_year;

	int day_of_year = 0;
	for (int i = 1; i < month; i++)
	{
		day_of_year += days_in_month[i];
	}

	day_of_year += day;
	return day_of_year;
}

/**
 * days_left_in_year - Gets the number of days left in the year.
 * @day: The day of the month.
 * @month: The month of the year.
 * @year: The year.
 *
 * Return: The number of days left in the year.
 */
int days_left_in_year(int day, int month, int year)
{
	int leap_year = is_leap_year(year);
	int days_in_month[] = {0, 31, 28 + leap_year, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int days_left = 0;

	for (int i = month + 1; i <= 12; i++)
	{
		days_left += days_in_month[i];
	}

	days_left += days_in_month[month] - day;
	return days_left;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int day, month, year;

	/* Input the date from the user */
	printf("Enter the date (day month year): ");
	scanf("%d %d %d", &day, &month, &year);

	/* Validate the input date */
	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date input.\n");
		return 1;
	}

	/* Check for valid day in February */
	int leap_year = is_leap_year(year);
	if (month == 2 && (day > 28 + leap_year || day < 1))
	{
		printf("Invalid date input.\n");
		return 1;
	}

	/* Get the day of the year */
	int day_of_year_result = day_of_year(day, month, year);
	printf("Day of the year: %d\n", day_of_year_result);

	/* Get the number of days left in the year */
	int days_left = days_left_in_year(day, month, year);
	printf("Days left in the year: %d\n", days_left);

	return 0;
}
1
