#include <string>
using namespace std;
string decrypt(string text, int s) {
	string result = "";

	// traverse text
	for (int i=0;i<text.length();i++) {
			// apply transformation to each character
			// Decrypt Uppercase letters
			if (isupper(text[i])) {
					result += char(int(text[i]-s-65)%26 +65);
				}

			// Decrypt Lowercase letters
			else {
					result += char(int(text[i]-s-97)%26 +97);
				}
		}

	// Return the resulting string
	return result;
}