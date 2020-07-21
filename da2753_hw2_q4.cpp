#include <iostream>
using namespace std;

int main()
{
  float positiveIntOne, positiveIntTwo;
  float divValue, modValue;

  cout << "Please enter two positive integers, speparated by a space:";
  cin >> positiveIntOne >> positiveIntTwo;

  divValue = positiveIntOne / positiveIntTwo;
  // modValue = positiveIntOne % positiveIntTwo;

  cout << positiveIntOne + positiveIntTwo << endl;
  cout << positiveIntOne - positiveIntTwo << endl;
  cout << positiveIntOne * positiveIntTwo << endl;
  cout << positiveIntOne / positiveIntTwo << endl;
  cout << positiveIntOne << " div " << positiveIntTwo << " = " << divValue << endl;
  // cout << positiveIntOne << " mod " << positiveIntTwo << "=" << modValue;

  return 0;
}