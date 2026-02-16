#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c",&ch);
  
  switch(ch)
  {
    case 65 ... 90: // Upper Case
    printf("ALPHABET: UPPER CASE\n");
    break;

    case 97 ... 122: // Lower case
    printf("ALPHABET: LOWER CASE\n");
    break;

    case 48 ... 57:  // Digits 
    printf("DIGIT\n");
    break;
    
    default :
    printf("SPACILA CHARACTER\n");
    break;
  }
  
  return 0;
} 