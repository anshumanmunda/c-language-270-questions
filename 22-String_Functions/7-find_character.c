//7. Write a function to find a character in a given string. Return index of first of given character. Return -1 if character not found.

#include<stdio.h>
#include<string.h>

int find_character(char*, int, char);

int main(){
  char str[100], ch;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  
  printf("Enter a character to search: ");
  scanf("%c",&ch);
  str[strlen(str)-1] = '\0';
  int len = strlen(str);
  
  int result = find_character(str,len,ch);
  if(result!=-1)
    printf("`%c` is present in `%s` at position %d",ch,str,result+1);
  else
    printf("`%c` is not present in `%s`",ch,str);

  return 0;
}

int find_character(char* str, int len, char ch){
  int i, found = 0;  
  for( i=0; i<len; i++ ){
       if( ch==str[i] ){
        found++;
        return i;
       } 
    }
    if(found==0)
     return -1;
}