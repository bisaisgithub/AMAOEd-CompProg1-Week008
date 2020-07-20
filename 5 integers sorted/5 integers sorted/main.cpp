#include<cstdlib>
#include<iostream>

using namespace std;

int main() {
	int n[5];

	// Get user input
	for (int i = 0; i < 5; i++) {
		cout << "Enter number[" << i + 1 << "]: ";
		cin >> n[i];
	}
	cout << endl;

	// Sort
	for (int i = 0; i < 5; i++) {
		for (int t = i; t < 5; t++) {
			if (n[i] > n[t]) {
				int temp = n[i];
				n[i] = n[t];
				n[t] = temp;
			}
		}
	}

	// Display back to the user
	cout << "The sorted numbers are: " << n[0] << ", "
		<< n[1] << ", " << n[2] << ", " << n[3] << ", "
		<< n[4] << ".";


	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}