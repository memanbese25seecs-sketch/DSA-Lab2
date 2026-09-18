#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char buffer[1000];
    cout << "Enter a string: ";
    cin.getline(buffer, 1000);

    int len = strlen(buffer);

    // Dynamically allocate memory for the string
    char *str = new char[len + 1];
    strcpy(str, buffer);

    // Reverse the string in place
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    cout << "Reversed: " << str << endl;

    // Free dynamically allocated memory
    delete[] str;

    return 0;
}