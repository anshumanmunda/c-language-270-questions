// 5. Write a function to extract a substring from a given string with specified start index (inclusive) and end index (exclusive), and store the extracted string in another char array. [ void extract_string(char *str, int start_index, int end_index, char *result);] 

#include<stdio.h>
#include<string.h>

void extract_string(char*,int*,int*,int*, char*);

int main(){
  char str[100];
  char result[100];
  int start, end;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';
  int len = strlen(str);

  printf("Enter start and end indices: ");
  scanf("%d %d",&start, &end); 

  if( start >= end || start<0 || end>=len ){
    printf("Invalid Index numbers.");
    return 0;
  }
  else 
    extract_string(str,&len,&start,&end,result);

  return 0;
}

void extract_string(char* str, int* len, int* start, int* end, char* result){
  
  int i,j = 0;  
  
  for( int i = *start; i<*end; i++){
    result[j] = *(str+i);      
    j++;
  }
  *(result+j) = '\0';
  printf("Sub string: %s",result);
}