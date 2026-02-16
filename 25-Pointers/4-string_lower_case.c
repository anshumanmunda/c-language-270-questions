// 4. Write a function to convert a given string into lowercase.
#include<stdio.h>
#include<string.h>

void lower_case(char*,int*);

int main(){
  char str[100];
  printf("Enter a string in upper case: ");
  fgets(str, sizeof(str), stdin );
  // str[strcspn(str,'\n')] = '\0';
  str[strlen(str)-1] = '\0';
  int len = strlen(str);
  
  lower_case(str,&len);

  return 0;
}

void lower_case(char* str,int* len){
   for( int i=0; i<*len; i++ ){
      if( *(str+i)>='A' && *(str+i)<='Z')
        *(str+i)+= 32;
   }
   printf("Lower Case string: %s",str);
}
