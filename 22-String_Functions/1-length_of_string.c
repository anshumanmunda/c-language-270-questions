// 1. Write a function to calculate length of the string.

#include<stdio.h>
#include<string.h>

void length_of_string(char*);

int main(){
  char str[20];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
 
  length_of_string(str);

  return 0;
}

void length_of_string(char* str){
  int i;
  for( i=0; str[i]; i++);
    printf("Length  = %d",i-1);
}
// completed