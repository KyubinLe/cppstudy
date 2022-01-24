#include <iostream>
using namespace std;
class Simple
{
public:
    int x;
    int y;

public:
    Simple() : x(0), y(0) {}
    Simple(int x) : x(x), y(0) {}
    void SetX(int x);
    int GetX();
    void SetY(int y);
    int GetY();

    Simple(int x, int y) { cout << "X : " << x << ", Y : " << y << endl; }

    ~Simple();
};