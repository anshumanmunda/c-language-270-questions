//4. Write a function to transform string into uppercase

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void upper_case(char*);

int main(){
  char str[100];
  printf("Enter a string in Lower Case: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';

  upper_case(str);
  

  return 0;
}

void upper_case(char* str){
  int len = strlen(str);
  for( int i=0; i<len; i++ ){
    str[i] = toupper(str[i]);
  }
  printf("%s",str);
}