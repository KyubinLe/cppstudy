// 01. 복사생성자 기본

// #include <iostream>
// using namespace std;

// class Simple{
//     public:
//     int x;
//     public:
//     SImple(int x):x(x) {cout << "인자 1 받는 생성자 호출!"<<endl;}
//     void ShowX(){
//         cout << "X : " << endl;
//     }
// };

// int main(){
//     Simple obj1(10);
//     Simple obj2(obj1);
//     obj2.Show();
//     }
// }

// #include <iostream>
// using namespace std;
// class Simple{
//     private:
//     int x;
//     int y;
//     public:
//     Simple(int x, int y) :x(x), y(y){}
//     // 복사생성자 완성하기
//     Simple(const Simple& ob){

//     }
//     void ShowXY(){ cout << x << ',' << y << endl;}
// };

// int main(){
//     Simple ob1(10,20);
//     Simple ob2 = ob1;
//     ob1.ShowXY();
//     ob2.ShowXY();
// }

// #include <iostream>
// using namespace std;
// class Simple()
// {
// public:
//     int x;

// public:
//     Simple(int x) : x(X){};
//     Simple(const Simple &ob)
//     {
//         this->x = ob.x;
//         cout << "복사 생성자 호출" << endl;
//     }
// };

// Simple Plusx2(Simple tmp)
// {
//     tmp.x++;
//     return tmp;
// }

// Simple CreateSimple()
// {
//     Simple tmp(15);
//     return tmp;
// }
// int main()
// {
//     Simple ob(10);
//     // plusX(ob);

//     CreateSimple();

//     return 0;
// }
// 복사생성자 호출시점 -> 1 객체생성시 초기값으로 설정 Simple ob2=ob1 (Simple ob2(ob1))
// 2 함수의 매개변수가 클래스형인경우
// 3 함수의 반환형이 클래스형인경우

// 03 복사 생성자 사용시 주의사항 얕은복사 vs 깊은복사
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Simple{
    private:
    string name;
    public:
    Simple(string name){
        int len = name.length() +1;
        this->name = new char[len];
        this->name = name;
        cout << "인자 1 생성자 호출" << len << endl;
    }
    void ShowName(){
        cout << "name : " << name << endl;
    }
    ~Simple(){}

};

int main(){
    Simple ob1("홍길동");
    ob1.ShowName();
}