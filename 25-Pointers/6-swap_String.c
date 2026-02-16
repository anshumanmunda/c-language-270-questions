// 6. Write a function to swap strings of two char arrays.

#include<stdio.h>
#include<string.h>

void swap_string(char*,char*);

int main(){
  char str1[100];
  char str2[100];
  printf("Enter string-1: ");
  fgets(str1, sizeof(str1),stdin);
  str1[strlen(str1)-1] = '\0';

  printf("Enter string-2: ");
  fgets(str2, sizeof(str2),stdin);
  str2[strlen(str2)-1] = '\0';

  int len1 = strlen(str1);
  int len2 = strlen(str2);

  swap_string(str1,str2);

  return 0;
}

void swap_string(char* str1,char* str2){
  char temp[100];

  printf("Before swapping:\n%s %s",str1,str2);
  strcpy(temp,str1);
  strcpy(str1,str2);
  strcpy(str2,temp);
  printf("\nAfter swapping:\n%s %s",str1,str2);
}

