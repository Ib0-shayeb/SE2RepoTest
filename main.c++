#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>

// Function to test
int Add(std::string a) {
    if( a[0] == '\0')
        return 0;

    auto pos_plus = a.find('+');
    auto pos_minus = a.find('-');
    auto pos_multiply = a.find('*');
    auto pos_devide = a.find('/');

    if(pos_plus == std::string::npos && pos_minus == std::string::npos && pos_multiply == std::string::npos && pos_devide == std::string::npos)
        return stoi(a);

    //else return 420;

    std::string delimiter = "/";
    std::string token = a.substr(0, a.find(delimiter));
}

// If parameter is not true, test fails
// This check function would be provided by the test framework
#define IS_TRUE(x) { if (!(x)) std::cout << __FUNCTION__ << " failed on line " << __LINE__ << std::endl; else std::cout << "passed" << std::endl;}

// Test for Add()
// You would need to write these even when using a framework
void test_Add()
{
    IS_TRUE(0 == Add(""));
    IS_TRUE(2 == Add("2"));
    IS_TRUE(3 == Add("2+1"));
}

int main(void) {
    
    test_Add();
}