/*Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.*/

#include<stdio.h>

int main ()
{
  float s1, s2, s3, s4,s5, p;
  printf("Enter the marks of 5 subjects: ");
  scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

  p = (s1+s2+s3+s4+s5)/5.0;
  printf(p>=40?"%.2f%%: PASS":"%.2f%%: FAIL",p,p);

}