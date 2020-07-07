#include <iostream>

using namespace std;


int main() {

	cout << "Exercises for Dynamic memory\n" << endl;

	/*
	Read a phrase from the user and output it again
	*/

	const int MAX_BUFFER_LENGTH = 256;

	char buffer[MAX_BUFFER_LENGTH];

	cout << "Please enter a phrase: ";

	cin.get(buffer, MAX_BUFFER_LENGTH - 1);

	cout << "Your input was: " << buffer;

	return 0;
}