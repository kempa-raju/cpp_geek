#include<iostream>
using namespace std;

int main() {

	int a = 10;
    int& x= ++a;
    cout << "Kemp here \n" << x;
    ++a = 20;
    cout << "Kemp here \n" << a;
    //error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
    //int& y = a++;
    
}
