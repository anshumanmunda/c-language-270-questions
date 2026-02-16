/*
1. Check whether a given set of three numbers are lengths of an isosceles triangle or not
2 .Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
3. Check whether a given set of three numbers are equilateral triangle or not
4. Exit
*/
#include<stdio.h>
int main()
{
  int a, b, c, choice, t;
  printf("\n1. Check isosceles triangle or not.\n2. Check right angled triangle or not.\n3. Check equilateral triangle or not.\n4. Exit\n");

  printf("Enter your choice: ");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1: // Isoceles Triangle
    printf("Enter 3 side of a triangle: ");
    scanf("%d %d %d", &a,&b,&c);
    printf( (a==b || b==c || c==a)? "Yes" : "No !");
    break;

    case 2: // Right angle Triangle
    printf("Enter Perpendicular: ");
    scanf("%d",&a);
    printf("Enter Base: ");
    scanf("%d",&b);
    printf("Enter Hypotenous: ");
    scanf("%d",&c);
    t = a*a + b*b;
    printf((c*c == t)? "Yes": "No!"); 
    break;

    case 3: // Equilateral Triangle
    printf("Enter 3 side of a triangle: ");
    scanf("%d %d %d", &a,&b,&c);
    printf( (a == b && b == c )? "Yes" : "No !");
    break;

    case 4: // Exit
    break;

    default :
    printf("INVALID CHOICE !");
    break;
  }

  return 0;
}