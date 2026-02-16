// 5. Write a program to convert a given string into uppercase.

#include<stdio.h>
#include<string.h>

int main(){
  char str[20];
  printf("Enter a string in lower case: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';
  
  // Method: 1
  printf("%s",strupr(str));



  // Method: 
  // for( int i=0; i<strlen(str); i++ )
  //    str[i]-=32;
  //   printf("%s",str);
  
    return 0;
} 