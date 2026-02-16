//Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>

int main()
{
  char ch;
  printf("Enter a Alphabet: ");
  scanf("%c",&ch);

  printf((ch >= 65 && ch<=90)? "UPPER CASE": "LOWER CASE");
}
