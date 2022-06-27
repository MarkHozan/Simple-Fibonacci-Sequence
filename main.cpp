#include <iostream>

using namespace std;

int main() {
  cout << "Fibonacci Sequence Program by Eddie Hozan\n";
	int terms;
	int t1 = 0;
	int t2 = 1; 
	int result;
	cout << "Enter the number of terms to print: ";
  cin >> terms;
	
	cout << t1 + t2 << ",";
	for (int x = 1; x <= terms; x++){
		result = t1 + t2;
		cout << result << ",";
		t1 = t2;		
		t2 = result;
	};
	

  	return 0;
}

