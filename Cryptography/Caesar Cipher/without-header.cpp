#include <iostream>
using namespace std;
 
// This function receives text and shift and
// returns the encrypted text
string encrypt(string text, int distance)
{
    string result = "";
 
    // traverse text
    for (int i = 0; i < text.length(); i++) {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i] + distance - 65) % 26 + 65);
 
        // Encrypt Lowercase letters
        else
            result += char(int(text[i] + distance - 97) % 26 + 97);
    }

    // Return the resulting string
    return result;
}

// Driver program to test the above function
int main()
{
    string text = "You Look Lonely";
    int distance = 3;
    cout << "Text : " << text;
    cout << "\nShift: " << distance;
    cout << "\nCipher: " << encrypt(text, distance);
    return 0;
}