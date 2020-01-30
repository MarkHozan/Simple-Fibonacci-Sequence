#include <iostream>

using namespace std;

int main() {
  int t1 = 0, t2 = 1, uterm = 0;
  int terms;
  cout << "Enter the number of terms to print: ";
  cin >> terms;

  uterm = t1 + t2;
  cout << "Fibonacci Sequence Program by Eddie Hozan\n";
  cout << t1 << " , " << t2 << " , ";

  for(int x = 0;x<terms-2;x++){
    cout << uterm << " , ";
      t1 = t2;
      t2 = uterm;
      uterm = t1 + t2;
  }
  return 0;
}
