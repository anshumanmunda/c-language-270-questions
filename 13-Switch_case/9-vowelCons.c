#include<stdio.h>

int main()
{
 char ch;
 printf("Enter a alphabet(a-z): ");
 scanf("%c",&ch);

 switch(ch)
 {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
   printf("Vowel");
   break;

   default :
   printf( (ch>= 'a' && ch<= 'z')?"Consonent":"Spacial character" );  
 }
 return 0;

}

