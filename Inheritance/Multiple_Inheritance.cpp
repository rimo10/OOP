// Multilevel Inheritance
#include <iostream>
using namespace std;
class A
{
protected:
    int i;
    ~A()
    {
        cout << "Class A Destructor called" << endl;
    }
};
class B
{
protected:
    int j;
    ~B()
    {
        cout << "Class B Destructor called" << endl;
    }
};
class C : public A, public B
{
    int k;

public:
    void get()
    {
        cout << "Enter i:";
        cin >> i;
        cout << "Enter j:";
        cin >> j;
    }
    void calculate()
    {
        k = i * j;
    }
    void display()
    {
        cout << "i=" << i << " j=" << j << " k=" << k << endl;
    }
    ~C()
    {
        cout << "Class C Destructor called" << endl;
    }
};
int main()
{
    C c1;
    c1.get();
    c1.calculate();
    c1.display();
}