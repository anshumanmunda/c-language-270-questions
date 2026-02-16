//2. Write a function to to reverse a string

#include<stdio.h>
#include<string.h>

void reverse_string(char*);

int main(){
  char str[20];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0'; 

  reverse_string(str);

  return  0;
}

void reverse_string(char* str){
  char temp;  
  for( int i=0; i<strlen(str)/2; i++){
    temp = str[i];
    str[i] = str[strlen(str)-1-i];
    str[strlen(str)-1-i] = temp;
  }
  printf("%s",str);
}