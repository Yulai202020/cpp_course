#include <iostream>

// its like using string = std::string;
typedef std::string string;

// u can rename module as u want
// typedef module::method u_wanted_method_name;

// or just use using
// using u_wanted_method_name module::method;

int main() {
    // here u can use std::string as string
    string a = "name";
    return 0;
}