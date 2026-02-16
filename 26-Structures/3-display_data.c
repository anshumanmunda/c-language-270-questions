// 3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
#include<string.h>

struct Employee{
  int id;
  char name[100];
  float salary;
};

void input_data();
void print_data(struct Employee);

int main(){
  struct Employee e1;
  input_data(e1);
 
  return 0;
}

void print_data(struct Employee e1){
  printf("Printing Employee Details:\n");
  printf("id = %d\n",e1.id);
  printf("Name = %s\n",e1.name);
  printf("Salary = %.2f\n",e1.salary);
  
}

void input_data(struct Employee e1){
  printf("Enter the details of employee:\n");
  printf("id = ");
  scanf("%d",&e1.id);

  fflush(stdin);
  printf("Name = ");
  fgets(e1.name, sizeof(e1.name), stdin);
  e1.name[strlen(e1.name)-1] = '\0';

  printf("Salary = ");
  scanf("%f",&e1.salary);

   print_data(e1);
}