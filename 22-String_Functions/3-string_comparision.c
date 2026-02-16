// 3. Write a function to compare two strings.

#include<stdio.h>
#include<string.h>

void string_compare(char*, char*);

int main(){
  char str1[20], str2[20];
  printf("Enter String 1: ");
  fgets(str1, sizeof(str1), stdin);
  str1[strlen(str1)-1] = '\0';

  printf("Enter String 2: ");
  fgets(str2, sizeof(str2), stdin);
  str2[strlen(str2)-1] = '\0';

  string_compare(str1,str2); 

  return 0;
}

void string_compare(char* str1, char* str2){
   int result = strcmp(str1, str2);

   if(result>0)
    printf("\"%s\" comes first the \"%s\" in dictionary order ",str2, str1);  
  else if(result<0)
    printf("\"%s\" comes first the \"%s\" in dictionary order ",str1, str2);   
  else
    printf("\"%s\" and  \"%s\" are equal ",str2, str1); 

}