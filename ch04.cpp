// 01. this basic -> 클래스로 객체 생성시 객체내에서 사용가능한 내장형 포인터 // 멤버변수와 매개변수의 구별
// #include <iostream>
// using namespace std;
// class Simple
// {
// public:
//     int x;

// public:
//     Simple() : x(0) { cout << "객체생성! 주소:" << this << endl; }
//     void SetX(int x)
//     {
//         this->x = x;
//     }
//     void ShowX() { cout << "X : " << x << endl; }
// };
// int main()
// {
//     Simple obj1;
//     Simple obj2;
//     cout << "obj1 addr : " << &obj1 << endl;
//     cout << "obj2 addr : " << &obj2 << endl;
//     return 0;
// }

// 02. this 이용 self-reference 반환
// #include <iostream>
// using namespace std;
// class Simple
// {
// public:
//     int x;
// public:
// Simple(int x):x(x){}
// Simple& PlusX(int n){
//     x += n;
//     return *this;
// }
// void ShowX(){
//     cout<< "X : " << x << endl;
// }
// };
// int main(){
//     Simple obj(10);
//     Simple& ref = obj.PlusX(4);
//     obj.ShowX();
//     ref.ShowX();

//     return 0;
// }
//
// #include <iostream>
// using namespace std;
// class position
// {
// private:
//     int x;
//     int y;

// public:
//     position(int x, int y) : x(x), y(y) {}
//     // plusX plusY minusXY
//     position& PlusX(int a)
//     {
//         x += a;
//         return *this;
//     }
//     position& PlusXY(int a, int b)
//     {
//         x += a;
//         y += b;
//         return *this;
//     }
//     position& PlusY(int a)
//     {
//         y += a;
//         return *this;
//     }
//     position& MinusXY(int a, int b)
//     {
//         x -= a;
//         y -= b;
//         return *this;
//     }
//     position& MinusY(int a)
//     {
//         y -= a;
//         return *this;
//     }
//     position& MinusX(int a)
//     {
//         x -= a;
//         return *this;
//     }
//     void ShowXY()
//     {
//         cout << "X : " << x << ", Y : " << y << endl;
//     }
// };
// int main()
// {
//     position c1(10, 10);
//     position c2(20, 20);
//     c1.ShowXY();
//     c1.PlusX(10).PlusY(30).MinusX(4);
//     c1.ShowXY();

//     return 0;
// }

// 03. 임시객체 전달 vs 이름 전달
// 리턴되는 *디스에 반환자료형이 클래스참조자형 -> 해당 객체 이름이 리턴 -> 새로운 객체생성 x
// 리턴되는 *this에 반환자료형이 클래스자료형 -> 호출되는 위치에 객체안의 값이 전달되어야 되기때문에 임시객체가 만들어지고 컴파일러로인해 자동소멸됨
// #include <iostream>
// using namespace std;
// class Simple
// {
// public:
//     int x;

// public:
//     Simple(int x) : x(x) { cout << x << "값객체 생성" << endl; }
//     Simple &Func1(int x)
//     {
//         this->x += x;
//         return *this;
//     }
//     Simple Func2(int x)
//     {
//         this->x += x;
//         return *this;
//     }
//     ~Simple()
//     {
//         cout << x << "값 객체 소멸" << endl;
//     }
// };
// int main()
// {
//     Simple obj1(10);
//     Simple obj2(20);

//     obj1.Func1(1);
//     obj2.Func2(1);
//     return 0;
// }