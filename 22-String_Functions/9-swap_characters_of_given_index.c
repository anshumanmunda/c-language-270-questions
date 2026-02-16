//9. Write a function to swap two characters of a given string with specified indices.
#include<stdio.h>
#include<string.h>

void swap_indices(char*,int,int,int);

int main(){
   char str[100];
   int i1, i2;
   printf("Enter a charcter: ");
   fgets(str, sizeof(str), stdin);
   str[strlen(str)-1] = '\0';
   int len = strlen(str);
   
   printf("Enter the indices of string array\n");
   printf("Index-1= ");
   scanf("%d",&i1);

   printf("Index-2= ");
   scanf("%d",&i2);

    if(i1>=0 && i1<len && i2>=0  && i2<len)
        swap_indices(str,len,i1,i2);
  else{
    printf("Please enter valid index number.");  
    return 0;
  }
  
  return 0;
}
// anshu
// 01234   --> 0 4
void swap_indices(char* str, int len, int i1, int i2){
  char str2[len];
  strcpy(str2,str); 

  char temp;
   temp = str[i1];
   str[i1] = str[i2];
   str[i2] = temp;
   printf("You Entered  = `%s`\nAfter swapping = `%s`",str2,str);
}