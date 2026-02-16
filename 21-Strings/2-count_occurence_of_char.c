// 2. Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>
#include<string.h>

int main(){
  char str[20], ch;
  int count = 0;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';

  printf("Enter a character: ");
  scanf("%c",&ch);

  for( int i = 0; i<strlen(str); i++ ){
      if( str[i]==ch )
        count++;
  }

  printf("Occurence of `%c` in \"%s\" is %d times: ",ch,str,count);

return 0;
}
