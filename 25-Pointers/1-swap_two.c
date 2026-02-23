//1. Write a function to swap values of two int variables (TSRN).
#include<stdio.h>
#include<string.h>

void swap(int*,int*);

int main(){
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d",&num1,&num2);
  printf("Before Swapping:\nnum1 = %d\nnum2 = %d",num1,num2);
  
  swap(&num1,&num2);
  printf("\nAfter Swapping:\nnum1 = %d\nnum2 = %d",num1,num2);

  return 0;
}

void swap(int* p1,int* p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// completed