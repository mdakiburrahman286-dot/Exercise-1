#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char* argv[]) {
	string str = argv[1];

	string vowels = "";
	string consonants = "";

	for (char c : str) {
		if (isalpha(c)) {
			char lower = tolower(c);

			if (lower == 'a' || lower == 'e' || lower == 'i' ||
				lower == 'o' || lower == 'u' || lower == 'y') {
				vowels += c;
			} else {
				consonants += c;
			}
		}
	}

	cout << vowels << " " << consonants << endl;

	return 0;
}
