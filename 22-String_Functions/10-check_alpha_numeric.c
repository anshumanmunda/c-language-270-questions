/*10. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit) */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void alpha_numeric(char*,int);

int main(){
   char str[100];
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);
   str[strlen(str)-1] = '\0';

   int len = strlen(str);
   alpha_numeric(str,len);

   return 0;
}

void alpha_numeric(char* str, int len){
  int flag_num = 0, flag_char = 0;  
  for( int i=0; i<len; i++ ){

      if(isdigit(str[i]))
        flag_num++;
       
      if(isalpha(str[i]))
        flag_char++;
      
        if(flag_char && flag_num)
         break;

    }
  if(flag_char && flag_num)
      printf("`%s` is alpha numeric string.",str);
  else
      printf("`%s` is not an alpha numeric string.",str);
}