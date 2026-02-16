// 9. Write a program in C to copy one string to another char array.


#include<stdio.h>
#include<string.h>

int main(){
  char str[20];
  char str2[20];
  int i;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';

  // Method: 1
  for( i=0; i<strlen(str); i++ )
      str2[i] = str[i];
  str2[i]= '\0';   
  printf("%s",str2);


  // Method: 2
  // printf("%s",strcpy(str2, str) );

  return 0;
}