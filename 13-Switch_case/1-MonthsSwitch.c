/*Write a program which take the month number as an input and display number of days in that month.*/
#include<stdio.h>
#include<stdio.h>
int main()
{
  int i, n;
  printf("Enter month number (1-12): ");
  scanf("%d",&n);  

  switch(n)
  {
    case 1:
    printf("31 Days");
    break;

    case 2:
    printf("28/29 Days");
    break;

    case 3:
    printf("31 Days");
    break;

    case 4:
    printf("30 Days");
    break;

    case 5:
    printf("31 Days");
    break;

    case 6:
    printf("30 Days");
    break;

    case 7:
    printf("31 Days");
    break;

    case 8:
    printf("31 Days");
    break;

    case 9:
    printf("30 Days");
    break;

    case 10:
    printf("31 Days");
    break;

    case 11:
    printf("30 Days");
    break;

    case 12:
    printf("31 Days");
    break;

    default :
    printf("INVALID MONTH NUMBER !\nPlease Try again");

  }
  return 0;
}