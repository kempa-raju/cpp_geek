#include<iostream>
using namespace std;

template <typename T>
class SmartPtr {
	private:
		T *ptr; // Actual pointer
	public:
		//contructor
		explicit SmartPtr(T *p = NULL) {
			ptr = p;
        }
        ~SmartPtr() {
            cout << "Destructor is called here deleting the pointer \n";
			delete(ptr);
		}
        //overloading the defrencing operator
		// we can deference it.
		T& operator* () {
			return *ptr;
		}

		//overloading the arrow operator so that memeber can be access like a
		//pointer 
        T* operator ->() {
			return ptr;
		}
};

class Test {
public:
	int value;
	Test() { value =10;}
};

int main()
{
	SmartPtr<int> ptr(new int());
    *ptr =20;
    cout << "The value is " << *ptr << endl;

    SmartPtr<Test> ptr2(new Test());
	
    cout << "The ptr2 value is " << ptr2->value << endl;
    return 0;
}
//valgrind --leak-check=yes ./a.out to check if there any mem leak
