// 4. Create a structure Of employee and Create structure array and take input of member variables and print it.
#include<stdio.h>
#include<string.h>

struct Employee{
  int id;
  char name[100];
  float salary;
};

void input_data(struct Employee [], int);
// void print_data();

int main(){
  struct Employee e[3];
 
  for( int i=0; i<3; i++ ){
     printf("Enter id for Employee %d: ",i+1);
     scanf("%d",&e[i].id);

     getchar();
     printf("Enter name for Employee %d: ",i+1);
     fgets(e[i].name, sizeof(e[i].name),stdin);
     e[i].name[ strlen(e[i].name) -1 ] = '\0';

     printf("Enter salary for Employee %d: ",i+1);
     scanf("%f",&e[i].salary);
     printf("\n");
  }

  printf("\n---------------Printing Employee Details---------------\n");
  for( int i=0; i<3; i++ )
      printf("%d\t,%s\t,%.2f\n",e[i].id, e[i].name, e[i].salary);
  

  return 0;
}




