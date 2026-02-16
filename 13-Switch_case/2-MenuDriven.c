#include<stdio.h>
#include<stdio.h>
int main()
{
  int a, b, n;
while(1)
{
  printf("\n1. Addition\n2. Substraction\n3. Multiplaction\n4. Division\n5. Exit: ");
  printf("\nEnter your choice: ");
  scanf("%d",&n);
  
  switch(n)
  {
    case 1: // Addition
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n", a,b,a+b);
    break;
    
    case 2: // Substraction
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("%d - %d = %d\n", a,b,a-b);
    break;

    case 3: //  Multiplaction
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("%dx%d = %d\n", a,b,a*b);
    break;

    case 4: // Division
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("%d/%d = %.2f\n", a,b,a/(float)b);
    break;

   case 5:
   return 0;
   
    default :
    printf("\nINVALID CHOICE!\nTRY AGAIN\n");

  }
}

  return 0;
} 