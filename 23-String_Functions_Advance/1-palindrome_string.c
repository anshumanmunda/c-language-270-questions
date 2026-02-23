// 1. Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<string.h>

int check_palindrome(char*,int);

int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';
  int len = strlen(str);

  if(check_palindrome(str,len))
    printf("`%s` is palindrome",str);
  else  
   printf("`%s` is not palindrome",str);

  return 0;
}

int check_palindrome(char* str,int len){
   int i;
   for( int i=0; i<len; i++ ){ 
      if( str[i] != str[len-1-i] )
        return 0;  
      return 1;  
   }

}

// Incomplete