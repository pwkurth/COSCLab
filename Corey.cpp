#include <iostream>
using namespace std;

int main()
{
	//initial size
	int size = 2;

	//variable used to count and print elements
	int count = 0;

	//dynamic array
	int *arr;
	arr = new int[size];
	
	//initial menu interface and user input variable
	char option;

	cout << "(p): Print elements" << endl;
	cout << "(a): Add element" << endl;
	cout << "(d): Delete element" << endl;
	cout << "(r): Return size" << endl;
	cout << "(e): Exit" << endl;
	cout << endl;

	cout << "Enter option: " << endl;
	cin >> option;

	// loop continues until user inputs 'e'
	while (option != 'e') {
	
		// prints array elements
		if (option == 'p') {
			// checks if count was incremented
			if (count > 0) {
				// prints only if there are elements in the array
				for (int i = 0; i < count; ++i) {
					cout << arr[i] << " ";
				}
				cout << endl;
			}
			else {
				cout << "No elements" << endl;
				cout << endl;
			}
		}
		// adds an element to the array
		else if (option == 'a') {
			int userInput;
			cout << "Enter element: ";
			cin >> userInput;
			cout << endl;
			
			// count is initialized at zero for first element
			arr[count] = userInput;
			count++;

			// checks if array will be large enough for next element
			if (count >= size) {
				
				//doubles size
				size = size * 2;
				cout << "Array expanded" << endl;
				cout << endl;

				//creates temporary array memory location
				int *temp = new int[size];

				//copies array
				for (int i = 0; i < size; ++i) {
					temp[i] = arr[i];
				}

				// deletes memory
				delete[] arr;

				// reuses original array
				arr = temp;

				


			}
		}
		else if (option == 'd') {
//FIX ME: needs to delete specific elements
//must shrink array
			count--;

		}
		else if (option == 'r') {
			//variable size should always reflect actual array size
			//variable count should always reflect amount of actual elements in array
			cout << "S: " << size << ", E: " << count;
			cout << endl;
			

		}
		else {
//FIX ME: needs to catch errors;

			}
			
			
			cout << "(p): Print elements" << endl;
			cout << "(a): Add element" << endl;
			cout << "(d): Delete element" << endl;
			cout << "(r): Return size" << endl;
			cout << "(e): Exit" << endl;
			cout << endl;

			cout << "Enter option: " << endl;
			cin >> option;


		
	}
		//deallocates array memory after program ends
		delete[] arr;

		return 0;
}

