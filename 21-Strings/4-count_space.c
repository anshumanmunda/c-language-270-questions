// 4. Write a program to count spaces in a given string.

#include<stdio.h>
#include<string.h>

int main(){
  char str[20];
  int count = 0;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';
  
  for( int i=0; i<strlen(str); i++ ){
      if( str[i] == ' ' )
        count++;
  }
  printf("Number of spaces in \"%s\" = %d ",str,count);

  return 0;
}  