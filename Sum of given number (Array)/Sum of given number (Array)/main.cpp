#include<cstdlib>
#include<iostream>

using namespace std;

int main() {
	int n;
	bool isNot1to100 = true;
	do
	{
		cout << "Invalid input. Please enter the correct number of elements from 1 to 100: ";
		cin >> n;
	} while (((n < 1) && !(n > 100)) || (!(n < 0) && (n > 100)));
	
	//cout << "Enter number of elements from 1 to 100: ";
	//cin >> n;
	//if (((n < 1) && !(n > 100)) || (!(n < 0) && (n > 100))) {
	//	isNot1to100 = true;
	//	
	//	cout << "not 1 to 100";
	//}
	//else {
	//	isNot1to100 = false;
	//	cout << " 1 to 100";
	//}
	//cout << endl;
	//cout << isNot1to100 << endl;
	//system("pause");
	
	
	

	int x[100];
	for (int i = 0; i < n; i= i + 1) {
		cout << "Number[" << i + 1 << "]:";
		cin >> x[i];
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < n; i = i + 1) {
		sum = sum + x[i];
	}

	cout << "The sum of the " << n << "number(s) is: " << sum << endl;
	
	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}