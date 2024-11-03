#include "DSString.h"
#include <cstring>

// Default constructor
DSString::DSString() : str(nullptr), len(0) {}

// Constructor with C-string
DSString::DSString(const char* input) {
    len = strlen(input);
    str = new char[len + 1];
    strcpy(str, input);
}

// Copy constructor
DSString::DSString(const DSString& other) {
    len = other.len;
    str = new char[len + 1];
    strcpy(str, other.str);
}

// Destructor
DSString::~DSString() {
    delete[] str;
}

// Assignment operator
DSString& DSString::operator=(const DSString& other) {
    if (this != &other) {
        delete[] str;
        len = other.len;
        str = new char[len + 1];
        strcpy(str, other.str);
    }
    return *this;
}

// Addition operator
DSString DSString::operator+(const DSString& rhs) const {
    char* newStr = new char[len + rhs.len + 1];
    strcpy(newStr, str);
    strcat(newStr, rhs.str);
    DSString result(newStr);
    delete[] newStr;
    return result;
}

// Equality operator
bool DSString::operator==(const DSString& rhs) const {
    return strcmp(str, rhs.str) == 0;
}

// Inequality operator
bool DSString::operator!=(const DSString& rhs) const {
    return !(*this == rhs);
}

// Index operator
char& DSString::operator[](int index) const {
    return str[index];
}

// Length function
int DSString::length() const {
    return len;
}

// Substring function
DSString DSString::substring(int start, int numChars) const {
    char* substr = new char[numChars + 1];
    strncpy(substr, str + start, numChars);
    substr[numChars] = '\0';
    DSString result(substr);
    delete[] substr;
    return result;
}

// c_str function
char* DSString::c_str() const {
    return str;
}

// Stream insertion operator
std::ostream& operator<<(std::ostream& os, const DSString& dsStr) {
    os << dsStr.str;
    return os;
}
