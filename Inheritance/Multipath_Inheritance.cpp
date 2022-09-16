#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void get()
    {
        cout << "Enter a:";
        cin >> a;
    }
};
class B : virtual public A
{
protected:
    int b;

public:
    void get()
    {
        cout << "Enter b:";
        cin >> b;
    }
};
class C : virtual public A
{
protected:
    int c;

public:
    void get()
    {
        cout << "Enter c:";
        cin >> c;
    }
};
class D : public B, public C
{
    int d;

public:
    void calculate()
    {
        A::get();
        B::get();
        C::get();
        int d = a + b + c;
        cout << "X=" << d;
    }
};
int main()
{
    D d1;
    d1.calculate();
}