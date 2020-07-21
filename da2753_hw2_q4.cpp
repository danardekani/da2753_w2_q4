#include <iostream>
using namespace std;

int main()
{
  int positiveIntOne, positiveIntTwo;
  int divValue, modValue;

  cout << "Please enter two positive integers, speparated by a space:" << endl;
  cin >> positiveIntOne >> positiveIntTwo;

  divValue = positiveIntOne / positiveIntTwo;
  modValue = positiveIntOne % positiveIntTwo;

  cout << positiveIntOne << " + " << positiveIntTwo << " = " << positiveIntOne + positiveIntTwo << endl;
  cout << positiveIntOne << " - " << positiveIntTwo << " = " << positiveIntOne - positiveIntTwo << endl;
  cout << positiveIntOne << " * " << positiveIntTwo << " = " << positiveIntOne * positiveIntTwo << endl;
  cout << positiveIntOne << " / " << positiveIntTwo << " = " << positiveIntOne / positiveIntTwo << endl;
  cout << positiveIntOne << " div " << positiveIntTwo << " = " << divValue << endl;
  cout << positiveIntOne << " mod " << positiveIntTwo << " = " << modValue << endl;

  return 0;
}