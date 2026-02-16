// 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]

#include<stdio.h>
#include<string.h>
#include<limits.h>

struct Employee{
  int id;
  char name[100];
  float salary;
};

void print_data(struct Employee[], int);
void input_data(struct Employee[], int);
void highest_salary(struct Employee[], int);


int main(){
  struct Employee e[3];
  input_data(e,3);
  print_data(e,3);
  highest_salary(e,3);
  
  return 0;
}

void highest_salary(struct Employee e[], int s){
  int richest_index = 0; 
    
  for (int i = 1; i < s; i++) {
      if (e[i].salary > e[richest_index].salary) {
        richest_index = i; 
      }
    }

    printf("\n--- Employee with Highest Salary ---\n");
    printf("ID     : %d\n", e[richest_index].id);
    printf("Name   : %s\n", e[richest_index].name);
    printf("Salary : %.2f\n", e[richest_index].salary);
}

void input_data(struct Employee e[], int s){
  for( int i=0; i<s; i++ ){
    printf("Enter id for Employee %d: ",i+1);
    scanf("%d",&e[i].id);
    
    while( getchar()!= '\n' );
    printf("Enter name for Employee %d: ",i+1);
    fgets(e[i].name, sizeof(e[i].name),stdin);
    e[i].name[ strlen(e[i].name) -1 ] = '\0';

    printf("Enter salary for Employee %d: ",i+1);
    scanf("%f",&e[i].salary);
    printf("\n");
  }
  
}

void print_data(struct Employee e[], int s){
  printf("\n---------Printing Employee Details---------\n");
  printf("\nID\tName\tSalary\n");
  printf("-------------------------");
  for( int i=0; i<s; i++ )
    printf("%d\t%s\t%.2f\n",e[i].id, e[i].name, e[i].salary);
}




