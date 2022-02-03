#include <iostream>
using namespace std;

class Parent
{
public:
    int x;

public:
    Parent() { cout << "부모클래스 생성자 호출\n"; }
};
class son : public Parent
{
public:
    int y;

public:
    son() { cout << "자식클래스 생성자 호출\n"; }
};
int main()
{
    son ob; // 상속관계의 하위클래스로 객체생성
    ob.x = 10;
    ob.y = 20;
}