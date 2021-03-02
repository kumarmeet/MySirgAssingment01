#include <stdio.h>
#include <stdlib.h>

int main()
{
    print_percentage_d();
    print_backslash_n();
    print_area_of_circle();
    print_area_of_rectangle();
    print_volume_of_cuboid();
    simple_interest();
    find_average();
    return 0;
}

//write a program to print %d on the screen
void print_percentage_d()
{
  printf("%%d");
  return;
}

//write a program to print \n on the screen
void print_backslash_n()
{
  printf("\n\\n");
  return;
}

//write a program to calculate area of circle on the screen. Take radius as an input from user
void print_area_of_circle()
{
  float pi = 3.14159, radius;

  printf("\nEnter radius -> ");
  scanf("%f", &radius);

  printf("\nArea of a Circle is %f", pi * (radius * radius));

  return;
}

//write a program to calculate area of rectangle on the screen. Take length and breadth as an input from user
void print_area_of_rectangle()
{
  float l, b;

  printf("\nEnter length and breadth -> ");
  scanf("%f %f", &l, &b);

  printf("\nArea of a Rectangle is %f", l * b);

  return;
}

//write a program to calculate volume of cuboid. Take an input from user
void print_volume_of_cuboid()
{
  float l, b, h;

  printf("\nEnter length, breadth and height-> ");
  scanf("%f %f %f", &l, &b, &h);

  printf("\nVolume of cuboid is %f", l * b * h);

  return;
}

//write a program to simple interest. Take an input from user
void simple_interest()
{
  float p, r, simpleInterest;
  int t;

  printf("\nEnter principal, rate, time -> ");
  scanf("%f %f %d", &p, &r, &t);

  simpleInterest = p * r * t / 100;
  printf("\nSimple interest is %f", simpleInterest);

  return;
}

//write a program to calculate average of three numbers. Take an input from user
void find_average()
{
  float n1, n2, n3, average;

  printf("\nEnter three integer constant-> ");
  scanf("%f %f %f", &n1, &n2, &n3);

  average = (n1 + n2 + n3) / 3;

  printf("\nAverage of three number is %f", average);

  return;
}
