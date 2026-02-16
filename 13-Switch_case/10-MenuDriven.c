/*
Write a menu driven program with the following options:
1.Calculate LCM of two numbers
2.Calculate sum of the digits of a number
3.Volume of a cuboid
4.Check whether a given number is Prime or not
5.Exit
*/

#include<stdio.h>
int main()
{
  int n, a, b, i=2, L, sum = 0;
  printf("\n1. Calculate LCM of two numbers\n2. Sum of the digits\n3. Volume of a cuboid\n4. Prime or not\n5. Exit\n");

  printf("Enter your choice: ");
  scanf("%d", &n);
  switch(n)
  {
    
    case 1: 
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);  // 4 6
    for( L = (a>b)?a:b; L<=a*b; i++ )
    {
      if( L%a==0  && L%b==0 ){
      printf("LCM = %d", L);
      break;
      }
      else
      L*=i;
    } 
    break; 

    case 2: // sum of digits
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a){
      sum = sum + a%10;
      a/=10;
    }
    printf("Count = %d", sum);
    break;


    case 3: // Volume of cuboid
    printf("Enter length width & height of cuboid: ");
    scanf("%d %d %d", &a, &b, &L);
    printf("Volume = %d", a*b*L);
    break;


    case 4: // Prime or not
    printf("Enter a number: ");
    scanf("%d", &a);
    while(i<a)
    {
      if( a%i==0 )
      break;
      i++;
    }
    printf( (i==a)?"Prime":"Not Prime" );
    break;

    case 5:
    break;

    default :
    printf("INVALID CHOICE !\nPLEASE TRY AGAIN");
    break;
  }

return 0;
}