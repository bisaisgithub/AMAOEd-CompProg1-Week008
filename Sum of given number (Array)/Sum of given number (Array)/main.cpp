#include<cstdlib>
#include<iostream>

using namespace std;

//int faveNumber() {
//	return 123;
//}

int main() {
	//int n = faveNumber();

	int n;

	do
	{
		cout << "Enter the correct number of elements from 1 to 100: ";
		cin >> n;
	}while (!(n > 0 && n <= 100));
	
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