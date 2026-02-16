// /*Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.*/

#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character: ");  
  scanf("%c",&ch);  
  if(ch>=65 && ch<=90)
  printf("ALPHABET: UPPER CASE");

  else if(ch>=97&& ch<=122)
  printf("ALPHABET: LOWER CASE");

  else
  printf((ch>=48 && ch<=57)? "DIGIT": "SPACIAL CHARACTER");
 
  return 0;
} 
  