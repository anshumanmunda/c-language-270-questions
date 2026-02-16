// 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]
#include<stdio.h>
#include<string.h>

struct Employee{
  int id;
  char name[100];
  float salary;
};

void input_data();

int main(){
  struct Employee e1;
  input_data(e1);

  return 0;
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
}