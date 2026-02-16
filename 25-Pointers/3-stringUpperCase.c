//3. Write a function to convert a given string into uppercase.

#include<stdio.h>
#include<string.h>

void upper_case(char*,int*);

int main(){
  char str[100];
  printf("Enter a string in lower case: ");
  fgets(str, sizeof(str), stdin );
  // str[strcspn(str,'\n')] = '\0';
  str[strlen(str)-1] = '\0';
  int len = strlen(str);
  
  upper_case(str,&len);

  return 0;
}

void upper_case(char* str,int* len){
   for( int i=0; i<*len; i++ ){
      if( *(str+i)>='a' && *(str+i)<='z')
        *(str+i)-= 32;
   }
   printf("Upper Case string: %s",str);
}
