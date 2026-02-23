/*Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
*/

#include<stdio.h>

int main ()
{
  int a,b,c;
  printf("Enter the sides of a triangle: ");
  scanf("%d %d %d",&a,&b,&c);
  printf(a+b>c && b+c>a && a+c>b ?"Valid Triangle":"Invalid Tringle" );

}