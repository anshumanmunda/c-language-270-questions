//Count digit of a numbers
#include<stdio.h>
int main()
{
  int i, n, count = 0;
  printf("Enter a number: ");
  scanf("%d",&n);
  do
  {
    n%10;
    count++;
    n = n/10;
  } while (n);
  printf("Count = %d",count);

 // Counting digits using For loop
   for(int i=n; i>0; i=i/10)  // 245
  {
    i%10;
    count++; 
  }
  printf("Count = %d",count);

   // Counting digits using while loop

   while(n)
   {
    n%10;
    count++;
    n/=10;
   }
    printf("Count = %d",count);

}  