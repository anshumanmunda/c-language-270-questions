#include<stdio.h>
#include<stdio.h>
int main()
{
  int i, n;
  printf("Enter Weeks number (1-7): ");
  scanf("%d",&n);  

  switch(n)
  {
    case 1:
    printf("\nMONDAY: Sunday ho ya monday rooz khow ande");
    break;

    case 2:
    printf("\nTUESDAY: Ajj Magalwar hai bandar ka bukhar hai");
    break;

    case 3:
    printf("\nWEDNESDAY:Dudu pila do");
    break;

    case 4:
    printf("\nTHURSDAY: Aaag laga di aaag ");
    break;

    case 5:
    printf("\nFRIDAY: Fri kro fish");
    break;

    case 6:
    printf("\nSATURDAY: Week end party");
    break;

    case 7:
    printf("\nSUNDAY: Sunday is a fun day");
    break;

    default :
    printf("\nINVALID CHOICE!\nTRY AGAIN\n");
  }
  return 0;
}
