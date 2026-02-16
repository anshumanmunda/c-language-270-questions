// 8 -> 9. Write a program to store information of 10 students and display them using structure.

#include<stdio.h>


struct Student {
  int id;
  char name[100];
  int age;
  float CGPA; 
};

void display_details(struct Student[], int);

int main(){
  struct Student s[10] = {
    {101, "Anshuman Munda", 22, 9.3},
    {102, "Priyanjali Das", 21, 9.2},
    {103, "Rahul Sharma", 19, 7.8},
    {104, "Sneha Kapoor", 22, 8.9},
    {105, "Amit Verma", 20, 6.5},
    {106, "Priya Mehra", 21, 9.5},
    {107, "Vikram Malhotra", 20, 7.2},
    {108, "Sanya Iyer", 19, 8.1},
    {109, "Arjun Reddy", 22, 6.9},
    {110, "Ishita Gupta", 21, 8.7}
  };

  display_details(s,10);

}


void display_details(struct Student s[], int size){
   printf("\n.........Student Details............\n");
   printf("\nId\tName\t\tAge\tCGPA\n");
   printf("------------------------------------\n");
   for( int i=0; i<size; i++ )
      printf("%-5d %-16s %4d %7.1f\n",s[i].id, s[i].name, s[i].age,s[i].CGPA);
  printf("\n\n");
   
}