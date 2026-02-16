/*
WAP to take date as an input in below given format and convert the date format and display the result as given below. User Input date format — "DD/MM/YYYY" ( 16/02/2026) Output format— "Day — DD , Month — MM , Year— YYYY" ( Day- 16 ,Month - 02 , Year - 2026)
*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
  int day, month, year;
  printf("Enter day, month & year (DD/MM/YYYY): ");
  scanf("%d/%d/%d",&day, &month, &year);

  printf("Day = %d, Month = %d, Year = %d",day,month,year);

  return 0;
}