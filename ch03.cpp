// // // // // // // 객체 = 현실 존재 사물 / 프로그래밍 객체 > 메모리 공간을 차지하는 데이터 집합 / 객체지향 > 객체의 일부속성과 기능만 추출하여 메모리 공간에서 사용한다하여 객체지향 / 클래스 > 동일 종류의 객체를 반복생산하기 위해 미리선언된자료형

// // // // // // // 에어컨 속성 : 모델명, 상품명, fan, eva, 모터, 전력량 기능 : 제습,냉방,전원
// // // // // // // 자동차 속성 : 소유자,차종,연료,속도 기능 : 가속,감속

// // // // // // // #include <iostream>
// // // // // // // using namespace std;

// // // // // // // // // // class car
// // // // // // // // // // {
// // // // // // // // // // public:
// // // // // // // // // //     char owner[10];
// // // // // // // // // //     int speed;
// // // // // // // // // //     int fuel;
// // // // // // // // // // };
// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     car hong = {"가", 0, 100};
// // // // // // // // // //     cout << hong.owner << endl;
// // // // // // // // // //     cout << hong.speed << endl;
// // // // // // // // // //     cout << hong.fuel << endl;
// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // class computer
// // // // // // // {
// // // // // // // public:
// // // // // // //     char owner[20];
// // // // // // //     char serial[50];
// // // // // // //     char cpu[10];
// // // // // // //     char ram[20];
// // // // // // //     char disk[20];
// // // // // // //     int power;

// // // // // // // public:
// // // // // // //     void Poweron()
// // // // // // //     {
// // // // // // //         if (power == 0)
// // // // // // //         {
// // // // // // //             cout << "전원 on!\n";
// // // // // // //             power++;
// // // // // // //         }
// // // // // // //         else
// // // // // // //             cout << "전원이 켜져있음\n";
// // // // // // //     }
// // // // // // //     void Poweroff()
// // // // // // //     {
// // // // // // //         if (power == 1)
// // // // // // //             cout << "전원 off!\n";
// // // // // // //         else
// // // // // // //             cout << "전원이 꺼져있음\n";
// // // // // // //     }
// // // // // // //     void appstart(const char* app1){
// // // // // // //         cout << app1 << "을 실행합니다";
// // // // // // //     }
// // // // // // //     void appstart(const char* app1, const char* app2){
// // // // // // //         cout << app1 << "와" << app2 << "을 실행합니다";
// // // // // // //     }
// // // // // // //     void appstart(const char* app1, const char* app2, const char* app3){
// // // // // // //         cout << app1 << "와" << app2 << "와" << app3 << "을 실행합니다";
// // // // // // //     }
// // // // // // //     void Showinfo()
// // // // // // //     {
// // // // // // //         cout << owner << endl
// // // // // // //              << serial << endl
// // // // // // //              << cpu << endl
// // // // // // //              << ram << disk << endl;
// // // // // // //     }
// // // // // // // };
// // // // // // // int main()
// // // // // // // {
// // // // // // //     computer hong = {"홍길동 ", "11-22-33 ", "i7 ", "16g", "1T", 0};
// // // // // // //     hong.Showinfo();
// // // // // // //     hong.Poweron();
// // // // // // //     hong.Poweroff();
// // // // // // //     hong.appstart("앱스토어");
// // // // // // // }

// // // // // // // #include <iostream>
// // // // // // // using namespace std;
// // // // // // // class Car
// // // // // // // {
// // // // // // // public:
// // // // // // //     char owner[20];
// // // // // // //     int speed;
// // // // // // //     int fuel;

// // // // // // // public:
// // // // // // //     void Accel()
// // // // // // //     {
// // // // // // //         if (fuel != 0 && speed != 200)
// // // // // // //         {
// // // // // // //             if (fuel < 2)
// // // // // // //                 cout << "연료 부족\n";
// // // // // // //             else if (speed == 200)
// // // // // // //                 cout << "최대속도\n";
// // // // // // //             else
// // // // // // //             {
// // // // // // //                 fuel -= 2;
// // // // // // //                 speed += 10;
// // // // // // //             }
// // // // // // //         }
// // // // // // //     }
// // // // // // //     void Break()
// // // // // // //     {
// // // // // // //         if (speed != 0)
// // // // // // //         {
// // // // // // //             if (speed == 0)
// // // // // // //                 cout << "현재속도 0\n";
// // // // // // //             else
// // // // // // //                 speed -= 10;
// // // // // // //         }
// // // // // // //     }
// // // // // // //     void Showinfo()
// // // // // // //     {
// // // // // // //         cout << "소유자 : " << owner << endl;
// // // // // // //         cout << "현재속도 : " << speed << endl;
// // // // // // //         cout << "연료량 : " << fuel << endl;
// // // // // // //     }
// // // // // // // };
// // // // // // // int main()
// // // // // // // {
// // // // // // //     Car hong = {"홍길동", 0, 50};
// // // // // // //     hong.Accel();
// // // // // // //     hong.Showinfo();

// // // // // // //     return 0;
// // // // // // // }

// // // // // // // #include <iostream>
// // // // // // // using namespace std;
// // // // // // // class Car
// // // // // // // {
// // // // // // // public:
// // // // // // //     char owner[20];
// // // // // // //     int speed;
// // // // // // //     int fuel;
// // // // // // //     char cupholder1[10];
// // // // // // //     char cupholder2[10];

// // // // // // // public:
// // // // // // //     void Accel()
// // // // // // //     {
// // // // // // //         if (fuel != 0 && speed != 200)
// // // // // // //         {
// // // // // // //             if (fuel < 2)
// // // // // // //                 cout << "연료 부족\n";
// // // // // // //             else if (speed == 200)
// // // // // // //                 cout << "최대속도\n";
// // // // // // //             else
// // // // // // //             {
// // // // // // //                 fuel -= 2;
// // // // // // //                 speed += 10;
// // // // // // //             }
// // // // // // //         }
// // // // // // //     }
// // // // // // //     void Break()
// // // // // // //     {
// // // // // // //         if (speed != 0)
// // // // // // //         {
// // // // // // //             if (speed == 0)
// // // // // // //                 cout << "현재속도 0\n";
// // // // // // //             else{
// // // // // // //                 speed -= 10;
// // // // // // //                 cout << "감속";
// // // // // // //             }
// // // // // // //         }
// // // // // // //     }
// // // // // // //     void addJuice(const char *cup1, const char *cup2){
// // // // // // //         strcpy_s(cupholder1,sizeof(cupholder1), cup1);
// // // // // // //         strcpy_s(cupholder2,sizeof(cupholder2), cup1);
// // // // // // //     }
// // // // // // //     void Showinfo()
// // // // // // //     {
// // // // // // //         cout << "소유자 : " << owner << endl;
// // // // // // //         cout << "현재속도 : " << speed << endl;
// // // // // // //         cout << "연료량 : " << fuel << endl;
// // // // // // //         cout << cupholder1;
// // // // // // //         cout << cupholder2;
// // // // // // //     }
// // // // // // // };
// // // // // // // int main()
// // // // // // // {
// // // // // // //     Car hong = {"홍길동", 0, 50};
// // // // // // //     hong.addJuice("콜라", "사이다");
// // // // // // //     hong.Accel();
// // // // // // //     hong.Showinfo();

// // // // // // //     return 0;
// // // // // // // }

// // // // // // #include <iostream>
// // // // // // using namespace std;
// // // // // // class simple
// // // // // // {
// // // // // // public:
// // // // // //     int x;
// // // // // //     int y;

// // // // // // public:
// // // // // //     simple()
// // // // // //     {
// // // // // //         cout << "디폴트 생성자 로출" << endl;
// // // // // //         x = 5;
// // // // // //         y = 5;
// // // // // //     }
// // // // // //     void showinfo(
// // // // // //     {
// // // // // //         cout << "x: " << x << ", y : " << y << endl;
// // // // // //     }
// // // // // // };

// // // // // // int main()
// // // // // // {
// // // // // //     // simple obj1 = {10,20};
// // // // // //     simple obj2;

// // // // // //     return 0;
// // // // // // }

// // // // // #include <iostream>
// // // // // using namespace std;
// // // // // class computer
// // // // // {
// // // // // public:
// // // // //     char name[30];
// // // // //     char sn[20];
// // // // //     char cpuspec[5];
// // // // //     char ramspec[5];
// // // // //     char diskspec[5];

// // // // // public:
// // // // //     computer()
// // // // //     {
// // // // //         cout << "생성자 호출됨 computer";
// // // // //         name = "소유자없음";
// // // // //         sn = "0000-0000";
// // // // //         cpuspec = "none";
// // // // //         ramspec = "none";
// // // // //         diskspec = "none";
// // // // //     }
// // // // // };

// // // // // int main()
// // // // // {
// // // // //     computer defaultss;
// // // // // }

// // 소멸자 : 객체 제거 사용 사용법 : 소멸자앞 ~ / 소멸자 호출순서는 생성자 역순

// #include <iostream>
// using namespace std;

// class Simple
// {
// public:
//     int x;
//     int y;

// public:
//     Simple() : x(0), y(0) {}
//     Simple(int x) : x(x), y(0) {}
//     void SetX(int x);
//     int GetX();
//     void SetY(int y);
//     int GetY();

//     Simple(int x, int y) { cout << "X : " << x << ", Y : " << y << endl; }

//     ~Simple();
// };

// int main()
// {
//     Simple obj1;
//     Simple obj2(10);
//     Simple obj3(10, 20);
//     return 0;
// }
// void Simple::SetX(int x){
//     this->x = x;
// }
// int Simple::GetX(){
//     return this->x;
// }
// Simple::~Simple(){
//         cout << x << "," << y << "소멸자 호출 !" << endl;
// }

// // //  정보은닉 + 캡슐화
// // #include <iostream>
// // #define _CRT_SECURE_NO_WARNINGS
// // #include <stdlib.h>
// // #include <unistd.h>
// // #include <cstring>
// // #include <string>
// // using namespace std;
// // class Person
// // {
// // public:
// //     string name;
// //     string job;
// // private:
// //     int salary;

// // public:
// //     Person(string name, string job, int salary)
// //     {
// //      this->name = name;
// //      this->job = job;
// //     }
// //     void setSalary(int salary)
// //     {
// //         this->salary = salary;
// //     }
// //     int getSalary(){
// //         return this->salary;
// //     }
// //     void Showinfo()
// //     {
// //         cout << "name : " << name << endl;
// //         cout << "job : " << job << endl;
// //         cout << "salary : " << salary << endl;
// //     }
// // };

// // int main()
// // {
// //     Person hong("홍길동", "프로그래머", 3200);
// //     hong.Showinfo();

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// class Engine
// {
// private:
//     void Induction() { cout << "연료 + 공기 흡입" << endl; }
//     void Compress() { cout << "피스톤 상승 ~ " << endl; }
//     void Power() { cout << "피스톤 상하 하면~" << endl; }
//     void Exhaust() { cout << "배기밸브~" << endl; }

// public:
//     void EngineStart()
//     {
//         Induction();
//         Compress();
//         Power();
//         Exhaust();
//     }
// };

// class Car
// {
// private:
//     Engine engine;

// public:
//     void Start()
//     {
//         engine.EngineStart();
//     }
// };

// int main()
// {
//     Car hong;
//     hong.Start();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Ttokbokkirecp
// {
// private:
//     void sauce()
//     {
//         cout << "간장, 굴소스, 설탕, 다진마늘, 참기름 등등 mix\n";
//     }
//     void vegetable()
//     {
//         cout << "대파, 양파, 당근 등등 cut\n";
//     }
//     void mix()
//     {
//         cout << "준비된 재료 mix\n";
//     }
//     void fry()
//     {
//         cout << "팬에 재료를 넣고 fry\n";
//     }
//     void fin()
//     {
//         cout << "그릇에 담아 마무리 요리 완성!\n";
//     }

// public:
//     void CookStart()
//     {
//         sauce();
//         vegetable();
//         mix();
//         fry();
//         fin();
//     }
// };

// class Chef
// {
// private:
//     Ttokbokkirecp tt;

// public:
//     void Cook()
//     {
//         tt.CookStart();
//     }
// };

// int main()
// {
//     Ttokbokkirecp ttt;
//     ttt.CookStart();
//     return 0;
// }

// car 클래스 함수부분 외부로 빼기
// #include <iostream>
// using namespace std;
// class Car
// {
// public:
//     char owner[20];
//     int speed;
//     int fuel;
//     string cupholder1;
//     string cupholder2;

// private:
//     void Accel();
//     void Break();
//     void addJuice(string cup1, string cup2);
//     void Showinfo();

// public:
//     void Carset(string cup1, string cup2)
//     {
//         Accel();
//         Break();
//         addJuice(cup1, cup2);
//         Showinfo();
//     }
// };
// int main()
// {
//     Car hong = {"홍길동", 0, 50};
//     hong.Carset("콜라", "사이다");

//     return 0;
// }

// void Car::Accel()
// {
//     if (fuel != 0 && speed != 200)
//     {
//         if (fuel < 2)
//             cout << "연료 부족\n";
//         else if (speed == 200)
//             cout << "최대속도\n";
//         else
//         {
//             fuel -= 2;
//             speed += 10;
//         }
//     }
// }
// void Car::Break()
// {
//     if (speed != 0)
//     {
//         if (speed == 0)
//             cout << "현재속도 0\n";
//         else
//         {
//             speed -= 10;
//             cout << "감속";
//         }
//     }
// }
// void Car::addJuice(string cup1, string cup2)
// {
//     this->cupholder1 = cup1;
//     this->cupholder2 = cup2;
// }
// void Car::Showinfo()
// {
//     cout << "소유자 : " << owner << endl;
//     cout << "현재속도 : " << speed << endl;
//     cout << "연료량 : " << fuel << endl;
//     cout << cupholder1;
//     cout << cupholder2;
// }

// #include <iostream>
// using namespace std;

// class computer
// {
// public:
//     string owner;
//     string serial;
//     string cpu;
//     string ram;
//     string disk;
//     int power;

// public:
//     // computer();
//     void Poweron();
//     void Poweroff();
//     void appstart(const char *app1);
//     void appstart(const char *app1, const char *app2);
//     void appstart(const char *app1, const char *app2, const char *app3);
//     void Showinfo();
// };
// int main()
// {
//     computer hong = {"홍길동 ", "11-22-33 ", "i7 ", "16g", "1T", 0};
//     hong.Showinfo();
//     hong.Poweron();
//     hong.Poweroff();
//     hong.appstart("앱스토어");
// }
// // computer::computer()
// // {
// //     this->owner = "소유자없음";
// //     this->serial = "NONE";
// //     this->cpu = "NONE";
// //     this->ram = "NONE";
// //     this->disk = "NONE";
// // }
// void computer::Poweron()
// {
//     if (power == 0)
//     {
//         cout << "전원 on!\n";
//         power++;
//     }
//     else
//         cout << "전원이 켜져있음\n";
// }
// void computer::Poweroff()
// {
//     if (power == 1)
//         cout << "전원 off!\n";
//     else
//         cout << "전원이 꺼져있음\n";
// }
// void computer::appstart(const char *app1)
// {
//     cout << app1 << "을 실행합니다\n";
// }
// void computer::appstart(const char *app1, const char *app2)
// {
//     cout << app1 << "와" << app2 << "을 실행합니다";
// }
// void computer::appstart(const char *app1, const char *app2, const char *app3)
// {
//     cout << app1 << "와" << app2 << "와" << app3 << "을 실행합니다";
// }
// void computer::Showinfo()
// {
//     cout << owner << endl
//          << serial << endl
//          << cpu << endl
//          << ram << disk << endl;
// }


// using namespace std;

// class Simple
// {
// public:
//     int x;
//     int y;

// public:
//     Simple() : x(0), y(0) {}
//     Simple(int x) : x(x), y(0) {}
//     void SetX(int x);
//     int GetX();
//     void SetY(int y);
//     int GetY();

//     Simple(int x, int y) { cout << "X : " << x << ", Y : " << y << endl; }

//     ~Simple();
// };

// int main()
// {
//     Simple obj1;
//     Simple obj2(10);
//     Simple obj3(10, 20);
//     return 0;
// }
// void Simple::SetX(int x){
//     this->x = x;
// }
// int Simple::GetX(){
//     return this->x;
// }
// Simple::~Simple(){
//         cout << x << "," << y << "소멸자 호출 !" << endl;
// }

// 14 파일분할
// #include <iostream>
// using namespace std;

// class Simple
// {
// public:
//     int x;
//     int y;

// public:
//     Simple() : x(0), y(0) {}
//     Simple(int x) : x(x), y(0) {}
//     void SetX(int x);
//     int GetX();
//     void SetY(int y);
//     int GetY();

//     Simple(int x, int y) { cout << "X : " << x << ", Y : " << y << endl; }

//     ~Simple();
// };

// int main()
// {
//     Simple obj1;
//     Simple obj2(10);
//     Simple obj3(10, 20);
//     return 0;
// }
// inline void Simple::SetX(int x){
//     this->x = x;
// }
// inline int Simple::GetX(){
//     return this->x;
// }
// inline Simple::~Simple(){
//         cout << x << "," << y << "소멸자 호출 !" << endl;
// }


// 파일분할

#include <iostream>
using namespace std;

class computer
{
public:
    string owner;
    string serial;
    string cpu;
    string ram;
    string disk;
    int power;

public:
        void Poweron();
    void Poweroff();
    void appstart(const char *app1);
    void appstart(const char *app1, const char *app2);
    void appstart(const char *app1, const char *app2, const char *app3);
    void Showinfo();
};
int main()
{
    computer hong = {"홍길동 ", "11-22-33 ", "i7 ", "16g", "1T", 0};
    hong.Showinfo();
    hong.Poweron();
    hong.Poweroff();
    hong.appstart("앱스토어");
}
void computer::Poweron()
{
    if (power == 0)
    {
        cout << "전원 on!\n";
        power++;
    }
    else
        cout << "전원이 켜져있음\n";
}
void computer::Poweroff()
{
    if (power == 1)
        cout << "전원 off!\n";
    else
        cout << "전원이 꺼져있음\n";
}
void computer::appstart(const char *app1)
{
    cout << app1 << "을 실행합니다\n";
}
void computer::appstart(const char *app1, const char *app2)
{
    cout << app1 << "와" << app2 << "을 실행합니다";
}
void computer::appstart(const char *app1, const char *app2, const char *app3)
{
    cout << app1 << "와" << app2 << "와" << app3 << "을 실행합니다";
}
void computer::Showinfo()
{
    cout << owner << endl
         << serial << endl
         << cpu << endl
         << ram << disk << endl;
}