// 10. Write a program to find first octurrence of a given character in a given string.

#include<stdio.h>
#include<string.h>

int main(){
  char str[20], ch;
  int i, flag = 0;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';

  printf("Enter a character: ");
  scanf("%c",&ch);

  for( i=0; i<strlen(str); i++ ){
     if( str[i] == ch ){
       flag = 1;
       break;
     }
  }

  if(flag==0)
   printf("`%c` is not present in \"%s\"",ch,str);
   else
   printf("`%c` is  present in \"%s\" at index numebr %d ",ch,str,i);

 
  return 0;
}
