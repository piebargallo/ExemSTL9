// CPP program to illustrate
// Implementation of front()  and back function

#include <iostream>
#include <vector>

using namespace std;

// Driver code
int main() {
	
	// Def vector
	vector<int> myvector;
	myvector.push_back(1);
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	
	// vector::front()
	cout << myvector.front() << " ";
	
	// vector::back()
	cout << myvector.back();
	
	return 0;

}
