/*Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
*/

#include<stdio.h>

int main ()
{
  int a, b, c;
  printf("Enter 3 number: ");
  scanf("%d %d %d", &a, &b, &c);

  if( a>b )  
  {
    (a>c)?printf("%d is greatest",a):printf("%d is greatest",c);
    printf("%d is greatest",(a>c)? a: c);
  }

  else
  {
    if( b>c )
    printf("%d is greatest",b);
    else
    printf("%d is greatest",c);
  }

}  