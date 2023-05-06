#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

    bool operator<(Complex x)
    {
        return real < x.real ? true : false;
    }

    friend ostream &operator<<(ostream &o, Complex &c1);

    void print()
    {
        cout << real << "+i" << img << endl;
    }
};

ostream &operator<<(ostream &o, Complex &c1)
{
    o << c1.real << "+i" << c1.img;
    return o;
}

int main()
{
    Complex a(1, 4);
    Complex b(2, 4);

    cout << a << b << endl;
    operator<<(cout, b);
}