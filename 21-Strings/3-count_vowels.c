// 3. Write a program to count vowels in a given string.
#include<stdio.h>
#include<string.h>

int main(){
  char str[20];
  int count = 0;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';

  for( int i=0; i<strlen(str); i++ ){
      if( str[i] == 'a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u'|| str[i] =='A' || str[i] =='E' || str[i] =='I' || str[i] =='O' || str[i] =='U')
        count++;
  }
  printf("Number of vowels in \"%s\"  = %d ",str,count);

  return 0;
}

