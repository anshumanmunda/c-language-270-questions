// 10. Write a program to store information of n students and display them using structure.

#include<stdio.h>
#include<string.h>

struct Student {
  int id;
  char name[100];
  int age;
  float CGPA; 
};

void input_data(struct Student[], int);
void display_data(struct Student[], int);

int main(){
  int size;
  printf("Enter the size of array: ");
  scanf("%d",&size);
  struct Student s[size];

  input_data(s,size);
  display_data(s,size);

  return 0;
}

void input_data(struct Student s[], int size){
   for( int i=0; i<size; i++ ){
      printf("\nRecording data for Student #%d\n", i + 1);
      printf("Enter id: ");
      scanf("%d",&s[i].id);
      
      while( getchar()!= '\n' );
      printf("Enter name: ");
      fgets( s[i].name, sizeof(s[i].name), stdin );
      s[i].name[strlen(s[i].name)-1] = '\0';
      
      printf("Enter age: ");
      scanf("%d",&s[i].age);
      
      printf("Enter CGPA: ");
      scanf("%f",&s[i].CGPA);
   }
}

void display_data(struct Student s[], int size){
   printf("\n.........Student Details............\n");
   printf("\nId\tName\t\tAge\tCGPA\n");
   printf("------------------------------------\n");
   for( int i=0; i<size; i++ )
      printf("%-5d %-16s %4d %7.1f\n",s[i].id, s[i].name, s[i].age,s[i].CGPA);
  printf("\n\n");
   
}