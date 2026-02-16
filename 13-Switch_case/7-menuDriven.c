#include<stdio.h>
#include<stdio.h>
int main()
{
  int  a,n, n1,sum = 0,i, fact = 1, f;
  float r;
while(1)
{
  printf("\n1. Factorial\n2. Even Odd\n3. Area of circle\n4. Sum of n natural numbers\n5. Exit: ");
  printf("\nEnter your choice: ");
  scanf("%d",&n);
  
  switch(n)
  {
    case 1: // Factorial
    printf("Enter a number: ");
    scanf("%d", &f);
    for(i=f; i>=1; i--)
    fact *=i;  
    printf("%d ! = %d\n", f,fact);
    break;
    
    case 2: // Even Odd
    printf("Enter a number: ");
    scanf("%d", &a);
    printf( (a&1)? "Odd\n": "Even\n"); 
    break;

    case 3: //  Area of circle
    printf("Enter radius of a circle: ");
    scanf("%f",&r);
    printf("Area = %.2f\n",3.13*r*r);
    break;

    case 4: // Sum of n natural number
    printf("Sum of n natural number: ");
    scanf("%d",&n1);
    for(i=1; i<=n1; i++)
    sum +=i; 
    printf("Sum = %d\n",sum);
    break;
   
    case 5:
    return 0;

    default :
    printf("\nINVALID CHOICE!\nTRY AGAIN\n");

  }
}

  return 0;
} 