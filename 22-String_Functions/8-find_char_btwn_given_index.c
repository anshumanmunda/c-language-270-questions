//8. Write a function to find character in a given string between specified indices (startindex (inclusive) and end index(exclusive) ).

#include<stdio.h>
#include<string.h>

void find_character(char*,int,char,int,int);

int main(){
  char str[100], ch;
  int i1,i2;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strlen(str)-1] = '\0';
  int len = strlen(str);

  // printf("%d",len);
  printf("Enter a character to search from given string -> `%s` : ",str);
  scanf("%c",&ch);

  printf("Enter valid indices of string array:\n");
  printf("Starting index (i1) = ");
  scanf("%d",&i1);
  printf("Ending index (i2) = ");
  scanf("%d",&i2);

  if(i1>=0 && i1<len && i2>=0  && i2<len)
    find_character(str,len,ch,i1,i2);
  else{
    printf("Please enter valid index number.");  
    return 0;
  }
  

  return 0;
}

void find_character(char* str,int len, char ch,int s, int e){
  int flag = 0;  
  for( int i=s; i<e; i++ ){
       if( str[i]==ch ){
          flag++;
          printf("`%c` found at index number %d",ch,i);
          break;
       } 
         
    }
    if(flag==0)
      printf("`%c` not found in `%s` between indices (%d-%d).",ch,str,s,e);
}

