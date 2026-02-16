//6. Write a function to count frequency of each character of the given string.

#include<stdio.h>
#include<string.h>

void frequency_of_characters(char*,int);

int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';
  int len = strlen(str);

  frequency_of_characters(str,len);
  
  return 0;
}

void frequency_of_characters(char* str,int len){
  
  int flag = 1;
  for( int i=0; i<len; i++ ){  // anshuman
    int count = 0;
    for( int j=0;j<len; j++ ){
        if( str[i]== str[j] )
          count++;
      }
      if(flag==1)
        printf("%c -> %d\n",str[i],count);
   }
}