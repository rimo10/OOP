// Multilevel Inheritance
#include <iostream>
using namespace std;
class A
{
protected:
    int i;
};
class B : public A
{
protected:
    int j;
};
class C : public B
{
    int k;

public:
    void get()
    {
        cout << "Enter i:";
        cin >> i;
        cout << "Enter j:";
        cin >> j;
        cout << "Enter k:";
        cin >> k;
    }
    void display()
    {
        cout << "i=" << i << " j=" << j << " k=" << k << endl;
    }
};
int main()
{
    C c1;
    c1.get();
    c1.display();
}