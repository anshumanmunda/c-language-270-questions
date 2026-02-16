// 8. Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
#include<string.h>

int main(){
  char str[20];
  int a = 0, d = 0, c = 0;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';

  for( int i=0; i<strlen(str); i++ ){
    if( str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
      a++;
    else if (str[i] >= 0  && str[i] <= 9 )
      d++;
    else
     c++;
  }
  printf("%s\nAlphabet = %d\nDigit = %d\nSpecial Character = %d",a,d,c);

  return 0;
}

