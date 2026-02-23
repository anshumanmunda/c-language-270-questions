/*Write a program to print size of an int, a float, a char and a double type variable*/

#include<stdio.h>

int main()
{
  int a = 2345;
  char ch = 'A';
  float f = 245.35f;
  double d = 768.23;
  printf("Size of int = %d bytes",sizeof(a));
  printf("\nSize of char = %d bytes",sizeof(ch));
  printf("\nSize of float = %d bytes",sizeof(f));
  printf("\nSize of double = %d bytes",sizeof(d));
}