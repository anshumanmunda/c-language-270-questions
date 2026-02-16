// 7. Write a program to reverse a string.

#include<stdio.h>
#include<string.h>

int main(){
  char str[20];
  char temp;
  printf("Enter a string in upper case: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';

  int len  = strlen(str);

  for( int i=0; i<len/2; i++ ){
      temp = str[i];
      str[i] = str[len-1-i];
      str[len-1-i] = temp;
  }
  printf("%s", str);

  return 0;
}