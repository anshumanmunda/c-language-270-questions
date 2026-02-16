// 5. Write a function to transform a string into lowercase

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void lower_case(char*);

int main(){
  char str[100];
  printf("Enter a string in Upper Case: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';

  lower_case(str);
  

  return 0;
}

void lower_case(char* str){
  int len = strlen(str);
  for( int i=0; i<len; i++ ){
    str[i] = tolower(str[i]);
  }
  printf("%s",str);
}