#include "simple.h"
using namespace std;
#include <iostream>
void Simple::SetX(int x)
{
    this->x = x;
}
int Simple::GetX()
{
    return this->x;
}
Simple::~Simple()
{
    cout << x << "," << y << "소멸자 호출 !" << endl;
}