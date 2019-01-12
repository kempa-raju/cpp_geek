/*
Conditionally assign a value without using conditional and arithmetic operators
Given 4 integers a, b, y, and x, where x can only either 0 and 1 only. The ask is as follows:

If 'x' is 0, 
   Assign value 'a' to variable 'y' 
Else (If 'x' is 1)
   Assign value 'b' to variable 'y'.
Note: – You are not allowed to use any conditional operator (including ternary operator) or any arithmetic operator ( +, -, *, /).

Examples :

Input :  a = 5 , b = 10, x = 1
Output :  y = 10

Input : a = 5, b = 10 , x = 0
Output :  y = 5
*/

#include<iostream>
using namespace std;

//function to assign the value to y based on the
// x
int assignValue(int a, int b,int x) {
	int array[2];
    int y;

    //store the value a and b array[0] and array[1] respectivly
	array[0] = a;
    array[1] = b;

    //store the value array based on the x in y;
    y = array[x];
   // return y;
   // a & -1 = a;
   // a & 0 = 0;
   // a | 0 = a;
   // ~-x(1) = 0;
   // return (a&~-x)|(b&-x); 
}

//Driver Code
int main() {
	
	int a=10,b=12,x=;
    cout << "Value assigned to y is " << assignValue(a,b,x);
    return 0;
}
