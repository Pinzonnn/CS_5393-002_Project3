#ifndef DSSTRING_H
#define DSSTRING_H

#include <iostream>

class DSString {
private:
    char* str;
    int len;

public:
    // Constructors
    DSString();
    DSString(const char*);

    // Copy Constructor
    DSString(const DSString&);

    // Destructor
    ~DSString();

    // Overloaded Operators
    DSString& operator=(const DSString&);
    DSString operator+(const DSString&) const;
    bool operator==(const DSString&) const;
    bool operator!=(const DSString&) const;
    char& operator[](int) const;

    // Member Functions
    int length() const;
    DSString substring(int, int) const;
    char* c_str() const;

    // Friend Functions
    friend std::ostream& operator<<(std::ostream&, const DSString&);
};

#endif // DSSTRING_H

