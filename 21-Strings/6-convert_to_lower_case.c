// 6. Write a program to convert a given string into lowercase.

#include<stdio.h>
#include<string.h>

int main(){
  char str[20];
  printf("Enter a string in upper case: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';
  
  printf("%s",strlwr(str));
 
}