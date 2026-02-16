#include<stdio.h>
int main()
{
  int m1,m2,m3,m4,m5;
  printf("Enter 5 subjects marks:\n");  
  printf("Subject 1:");
  scanf("%d",&m1);
  printf("Subject 2:");
  scanf("%d",&m2);
  printf("Subject 3:");
  scanf("%d",&m3);
  printf("Subject 4:");
  scanf("%d",&m4);
  printf("Subject 5:");
  scanf("%d",&m5);

  if (m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
  printf("PASS");
  else
  printf("FAIL !");
  return 0;
} 