//member variable is masked by the local variable.
//in order access the memebr ariable we need to
// use the this pointer in memebr function.
//we can scoe resiltion operato :: to access the static memebr variable
#include <iostream>

using namespace std;

class Test {
	private:
		int a;
	public:
        void set(int x) { a = x; }
        int get() { return a; }
		void func(int a) { 
			cout << "The value of a in func " << a << endl; 
			cout << "The value of memebr a in func " << this->a << endl;
		}
};
int main()
{
	Test x;
    x.set(10);
    cout << "the value of memebr variable " << x.get() << endl;
    x.func(50);
    return 0;
}
