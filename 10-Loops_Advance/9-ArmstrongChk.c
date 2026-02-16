//WAP to check weather a number is armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
{
  int n, temp, count = 0;
  float arm = 0.0;
  printf("Enter a number: ");  //153
  scanf("%d", &n);
  temp = n;

 // counting digits
 while(n){
  n/=10;
  count++;
 }
 n = temp;
 
 //sum 
 while(n)
  {
    int digit = n%10;
    arm += pow(digit,count); //    pow fx returns double
    n/=10; // 1
  }
  printf( ((int)arm == temp)?"Armstrong number":"Not Armstrong number !" );
  return 0;  
}