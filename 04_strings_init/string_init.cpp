#include <iostream>
#include <string>

int main(void) {

	// Initialize the string
	std::string str1("this is the first string");

	// Initialize the string with another string
	std::string str2(str1);

	// Initialize the string with character and number of occurrence
	std::string str3(100, '?');

	// Initialize the string with a part of another string
	std::string str4(str1,18, 6); // 14 start index, 6 characters to take

	std::cout << str4 << std::endl;
    std::cout << str3 << std::endl;

    if (str1 == str2) {
	    std::cout << str4 + str1 << std::endl;
	}
	

    // In class practice - A+ attendance code
    std::string s0("3");
    std::string s1 = "8";
    std::string s2 = s0 + s1;
    s2 += "7";
    s2 += (s1 < s2) ? s0 : "Z";
    std::cout << s2 << "J" << std::endl;

    return 0;

}


