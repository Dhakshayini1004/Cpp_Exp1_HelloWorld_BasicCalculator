//Name : Dhakshayini Usha R
//PRN : 24070123039 ENTC A2
#include<iostream>
using namespace std;


int main() {
	float num_1, num_2, sum, diff, quot;
	long float prod;
	cout << "Hello World" << endl;

	cout << "Enter num1 :" << "\t";
	cin >> num_1;

	cout << "Enter num_2 :" << "\t";
	cin >> num_2;

	sum = num_1 + num_2;
	cout << "Sum :" << sum << endl;

	diff = num_1 - num_2;
	cout << "Difference :" << diff << endl;

	prod = num_1 * num_2;
	cout << "Product :" << prod << endl;

	if (num_2 != 0) {
		quot = num_1 / num_2;
		cout << "Division :" << quot << endl;
	}
	else {
		cout << "Division : Undefined" << endl;
	}

	return 0;
}


/* Sample Output:
Hello World
Enter num1 : 22
Enter num_2 : 333
Sum : 355
Difference : -311
Product : 7326
Division : 0.0660661 */
