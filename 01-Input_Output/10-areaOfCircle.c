/*WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format. 

Expected output format – “Area of circle is A having the radius R”. Replace A with area 
& R with radius. */

#include<stdio.h>

int main()
{
  float r, area;

  printf("Enter the radius of a circle: ");
  scanf("%f",&r);

  area =  3.14*r*r; //pow(r,2)
  printf("Area of circle is %.2f having the radius %f", area, r);

  return 0;

}