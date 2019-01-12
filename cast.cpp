#include<iostream>
using namespace std;

class student {
	private:
		int roll;
	public:
		student(int r): roll(r) {
        	cout << "Contructor called with parametrized args " << roll << endl;
        }
		
	void testRoll() const {
        //can modify the memebr const function
        // assignment of member ‘student::roll’ in read-only object

		//To Remove the const ness we can use the cons_cast. It used to remove the constness of the object 
		(const_cast<student*>(this))->roll = 5;
	}
    int getRoll() const {
		return this->roll;
	}
};

int main()
{
	student s1(100);
	cout << "the Student roll is " << s1.getRoll();
    s1.testRoll();
	cout << "\nthe Student new roll is " << s1.getRoll();
}
