// 6. Write a function to count vowels in a given string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void count_vowels(char*);

int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  count_vowels(str);

  return 0;
}

void count_vowels(char* str){
  int count = 0, len = strlen(str);
   for( int i=0; i<len; i++ ){
    char ch = tolower(str[i]);
      if( ch=='a' ||  ch=='e' ||  ch=='i' ||  ch=='o' ||  ch=='u')
          count++;
   }
   printf("Number of vowels = %d",count);
}