//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <your name> on <current date>
#include<iostream>
using namespace std;

int main()
{
  //declare named constants and variables
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0;
  const double PI = 3.14159;
  // input data
  cout << "Height: ";
  cin >> height;
  cout << "Radius: ";
  cin >> radius;
  //calculate and display
  volume = PI * radius * radius * height;
  cout << "Volume: " << volume << endl;
  return 0;
} //end of main function
