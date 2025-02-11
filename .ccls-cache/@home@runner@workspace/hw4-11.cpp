// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  // declare variables
  double beginningBalance=0.0;
  double totalDeposits=0.0;
  double withdraws=0.0;
  double accountBalance=0.0;
//enter input items
  cout<<"Enter beginning balance: ";
  cin>>beginningBalance;
  cout<<"Enter total deposits: ";
  cin>>totalDeposits;
  cout<<"Enter total withdraws: ";
  cin>>withdraws;
  //calculate and display the ending balance
  accountBalance=beginningBalance+totalDeposits-withdraws;
  cout<<"Account balance: "<<accountBalance<<endl;


  return 0;
} // end of main function