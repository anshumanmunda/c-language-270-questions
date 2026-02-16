//10. Write a function to concatenate two strings.

#include<stdio.h>
#include<string.h>

void concatenate_string(char*,int,char*,int);

int main(){
   char str1[100], str2[100];
   int len1,len2;
   printf("Enter string 1: ");
   fgets(str1,sizeof(str1),stdin);
   str1[strlen(str1)-1]='\0';
   len1 = strlen(str1);
   
   printf("Enter string 2: ");
   fgets(str2,sizeof(str2),stdin);
   str2[strlen(str2)-1]='\0';
   len2 = strlen(str2);

   concatenate_string(str1, len1, str2, len2);

   return 0;
}

void concatenate_string(char* str1, int len1, char* str2, int len2){
    int size = len1+len2+1;
    char str3[size];
    int i,j;
    for( i=0; i<len1; i++ )
        str3[i] = str1[i]; 

    for( j=0; j<len2; j++ )
        str3[i+j] = str2[j]; 
    
    str3[len1+len2]='\0';
    printf("%s",str3);
}

