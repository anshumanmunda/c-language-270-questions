/* Write a program to input three characters from the user and display characters with their corresponding ASCII codes.*/

#include<stdio.h>

int main ()
{
  char c1, c2, c3;
  printf("Enter three character: ");
  scanf("%c %c %c", &c1, &c2, &c3); 

  printf("ASCII code of '%c' --> %d\n",c1,c1);
  printf("ASCII code of '%c' --> %d\n",c2,c2);
  printf("ASCII code of '%c' --> %d\n",c3,c3);

}  //  💡 try:while taking input hit enter