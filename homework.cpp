#include <iostream>
#include <string>
using namespace std;

/* Task 1: vowel / consonant extraction.
    Input: a single argument (string) that comes in through argv[1]
    Output (and this has to be exact):
        1) print all vowels from the string in order they appear
        2) print a space
        3) print all consonants from the string in order they appear
        E.g.: "Hello, world!" would output "eoo Hllwrld"

    Note: list of vowels: a, e, i, o, u, y. The rest of the alphabet are consonants.
    Note: if an exercise is not clear, you can look at evaluate.py.
         PROGRAM_ARGS are the inputs for testing.
         EXPECTED_OUTPUTS are, well, the expected outputs.
    
    Only return 0 at the end if the task has been completed successfully.
    Do not return 1.
        While it is common practice to return 1 when, for example, provided
        arguments are invalid, the evaluation script will report errors when
        it catches them. This makes it clearer why your code failed.
        If you return 1 instead of allowing the program to crash, the
        evaluation script cannot provide useful information about the error.
    
    There is no need to edit compile.bat for this exercise.
*/

int main(int argc, char* argv[]) {
    string input = argv[1];

    for (char c : input) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cout << c;
        }
    }

    cout << " ";

    for (char c : input) {
        if (c >= 'a' && c <= 'z' &&
            c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            cout << c;
        }
    }

    return 0;
}