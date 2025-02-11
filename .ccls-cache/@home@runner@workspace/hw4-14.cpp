// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  // declare named constants and variables
  int small=0;
  int medium=0;
  int large=0;
  int family=0;
  double total=0.0;
  double smallPercent=0.0;
  double mediumPercent=0.0;
  double largePercent=0.0;
  double familyPercent=0.0;
  // enter input items
  cout<<"Number of small pizzas sold: ";
  cin>>small;
  cout<<"Number of medium pizzas sold: ";
  cin>>medium;
  cout<<"Number of large pizzas sold: ";
  cin>>large;
  cout<<"Number of family pizzas sold: ";
  cin>>family;
  // calculate and display the total sold
  total=small+medium+large+family;
  // calculate and display the percentages
  smallPercent=(small/total)*100;
  mediumPercent=(medium/total)*100;
  largePercent=(large/total)*100;
  familyPercent=(family/total)*100;
// display the output
  cout<<"\nTotal pizzas sold: "<<total<<endl;
  cout<<"Percentage of small pizzas sold: "<<smallPercent<<endl;
  cout<<"Percentage of medium pizzas sold: "<<mediumPercent<<endl;
  cout<<"Percentage of large pizzas sold: "<<largePercent<<endl;
  cout<<"Percentage of family pizzas sold: "<<familyPercent<<endl;

  return 0;
} // end of main function