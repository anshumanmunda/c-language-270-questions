// 2. Write a function of search all occurrences of a given character in a given string.Result of search is a list of indices to be stored in the given array. [ void search_all_occurrences(char *str, char Ch, int *arr);]

#include<stdio.h>
#include<string.h>

void search_all_occurence(char*,char*,int*);

int main(){

  char str[100], ch;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';  
  int len = strlen(str);

  printf("Enter a character to get occurence their indices: ");
  scanf("%c",&ch);

  int arr[len];
  search_all_occurence(str,&ch,arr); 
  return 0;
}

void search_all_occurence(char* str,char* ch,int* arr){
  int index_count=0;
  int len = strlen(str);
  
  for( int i=0; i<len; i++){ 
     if( *(str+i)== *ch ){
        *(arr+index_count) = i;
        index_count++;
     }
    }
    if(index_count>0){
      printf("`%c` found in `%s` at indeces:\n",*ch,str);
      for( int i=0; i<index_count; i++ )
        printf("%d ",*(arr+i));
    }
    else
     printf("`%c` not found in `%s`",*ch,str);
    
}