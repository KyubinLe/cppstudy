// // // 객체 = 현실 존재 사물 / 프로그래밍 객체 > 메모리 공간을 차지하는 데이터 집합 / 객체지향 > 객체의 일부속성과 기능만 추출하여 메모리 공간에서 사용한다하여 객체지향 / 클래스 > 동일 종류의 객체를 반복생산하기 위해 미리선언된자료형

// // // 에어컨 속성 : 모델명, 상품명, fan, eva, 모터, 전력량 기능 : 제습,냉방,전원
// // // 자동차 속성 : 소유자,차종,연료,속도 기능 : 가속,감속

// // // #include <iostream>
// // // using namespace std;

// // // // // // class car
// // // // // // {
// // // // // // public:
// // // // // //     char owner[10];
// // // // // //     int speed;
// // // // // //     int fuel;
// // // // // // };
// // // // // // int main()
// // // // // // {
// // // // // //     car hong = {"가", 0, 100};
// // // // // //     cout << hong.owner << endl;
// // // // // //     cout << hong.speed << endl;
// // // // // //     cout << hong.fuel << endl;
// // // // // //     return 0;
// // // // // // }

// // // class computer
// // // {
// // // public:
// // //     char owner[20];
// // //     char serial[50];
// // //     char cpu[10];
// // //     char ram[20];
// // //     char disk[20];
// // //     int power;

// // // public:
// // //     void Poweron()
// // //     {
// // //         if (power == 0)
// // //         {
// // //             cout << "전원 on!\n";
// // //             power++;
// // //         }
// // //         else
// // //             cout << "전원이 켜져있음\n";
// // //     }
// // //     void Poweroff()
// // //     {
// // //         if (power == 1)
// // //             cout << "전원 off!\n";
// // //         else
// // //             cout << "전원이 꺼져있음\n";
// // //     }
// // //     void appstart(const char* app1){
// // //         cout << app1 << "을 실행합니다";
// // //     }
// // //     void appstart(const char* app1, const char* app2){
// // //         cout << app1 << "와" << app2 << "을 실행합니다";
// // //     }
// // //     void appstart(const char* app1, const char* app2, const char* app3){
// // //         cout << app1 << "와" << app2 << "와" << app3 << "을 실행합니다";
// // //     }
// // //     void Showinfo()
// // //     {
// // //         cout << owner << endl
// // //              << serial << endl
// // //              << cpu << endl
// // //              << ram << disk << endl;
// // //     }
// // // };
// // // int main()
// // // {
// // //     computer hong = {"홍길동 ", "11-22-33 ", "i7 ", "16g", "1T", 0};
// // //     hong.Showinfo();
// // //     hong.Poweron();
// // //     hong.Poweroff();
// // //     hong.appstart("앱스토어");
// // // }

// // // #include <iostream>
// // // using namespace std;
// // // class Car
// // // {
// // // public:
// // //     char owner[20];
// // //     int speed;
// // //     int fuel;

// // // public:
// // //     void Accel()
// // //     {
// // //         if (fuel != 0 && speed != 200)
// // //         {
// // //             if (fuel < 2)
// // //                 cout << "연료 부족\n";
// // //             else if (speed == 200)
// // //                 cout << "최대속도\n";
// // //             else
// // //             {
// // //                 fuel -= 2;
// // //                 speed += 10;
// // //             }
// // //         }
// // //     }
// // //     void Break()
// // //     {
// // //         if (speed != 0)
// // //         {
// // //             if (speed == 0)
// // //                 cout << "현재속도 0\n";
// // //             else
// // //                 speed -= 10;
// // //         }
// // //     }
// // //     void Showinfo()
// // //     {
// // //         cout << "소유자 : " << owner << endl;
// // //         cout << "현재속도 : " << speed << endl;
// // //         cout << "연료량 : " << fuel << endl;
// // //     }
// // // };
// // // int main()
// // // {
// // //     Car hong = {"홍길동", 0, 50};
// // //     hong.Accel();
// // //     hong.Showinfo();

// // //     return 0;
// // // }

// // // #include <iostream>
// // // using namespace std;
// // // class Car
// // // {
// // // public:
// // //     char owner[20];
// // //     int speed;
// // //     int fuel;
// // //     char cupholder1[10];
// // //     char cupholder2[10];

// // // public:
// // //     void Accel()
// // //     {
// // //         if (fuel != 0 && speed != 200)
// // //         {
// // //             if (fuel < 2)
// // //                 cout << "연료 부족\n";
// // //             else if (speed == 200)
// // //                 cout << "최대속도\n";
// // //             else
// // //             {
// // //                 fuel -= 2;
// // //                 speed += 10;
// // //             }
// // //         }
// // //     }
// // //     void Break()
// // //     {
// // //         if (speed != 0)
// // //         {
// // //             if (speed == 0)
// // //                 cout << "현재속도 0\n";
// // //             else{
// // //                 speed -= 10;
// // //                 cout << "감속";
// // //             }
// // //         }
// // //     }
// // //     void addJuice(const char *cup1, const char *cup2){
// // //         strcpy_s(cupholder1,sizeof(cupholder1), cup1);
// // //         strcpy_s(cupholder2,sizeof(cupholder2), cup1);
// // //     }
// // //     void Showinfo()
// // //     {
// // //         cout << "소유자 : " << owner << endl;
// // //         cout << "현재속도 : " << speed << endl;
// // //         cout << "연료량 : " << fuel << endl;
// // //         cout << cupholder1;
// // //         cout << cupholder2;
// // //     }
// // // };
// // // int main()
// // // {
// // //     Car hong = {"홍길동", 0, 50};
// // //     hong.addJuice("콜라", "사이다");
// // //     hong.Accel();
// // //     hong.Showinfo();

// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;
// // class simple
// // {
// // public:
// //     int x;
// //     int y;

// // public:
// //     simple()
// //     {
// //         cout << "디폴트 생성자 로출" << endl;
// //         x = 5;
// //         y = 5;
// //     }
// //     void showinfo(
// //     {
// //         cout << "x: " << x << ", y : " << y << endl;
// //     }
// // };

// // int main()
// // {
// //     // simple obj1 = {10,20};
// //     simple obj2;

// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// class computer
// {
// public:
//     char name[30];
//     char sn[20];
//     char cpuspec[5];
//     char ramspec[5];
//     char diskspec[5];

// public:
//     computer()
//     {
//         cout << "생성자 호출됨 computer";
//         name = "소유자없음";
//         sn = "0000-0000";
//         cpuspec = "none";
//         ramspec = "none";
//         diskspec = "none";
//     }
// };

// int main()
// {
//     computer defaultss;
// }

#include <iostream>
#include <windows.h>
using namespace std;
class Car
{
public:
    char owner[20];
    int speed;
    int fuel;
    char cupholder1[10];
    char cupholder2[10];

public:
    void Accel()
    {
        if (fuel != 0 && speed != 200)
        {
            if (fuel < 2)
                cout << "연료 부족\n";
            else if (speed == 200)
                cout << "최대속도\n";
            else
            {
                fuel -= 2;
                speed += 10;
            }
        }
    }
    Car()
    {
        cout << "자동차 객체 생성!\n";
        strcpy_s(this->owner, sizeof(owner), owner);
        speed = 0;
        fuel = 100;
                strcpy_s(this->cupholder1, sizeof(owner), "none");
        strcpy_s(this->cupholder2, sizeof(owner), "none");
    }
    Car(const char *owner, int speed, int fuel)
    {
        cout << "car(x,y,z) 호출\n";
        this->speed = speed;
        this->fuel = fuel;
        strcpy_s(this->cupholder1, sizeof(cupholder1), "none");
        strcpy_s(this->cupholder2, sizeof(cupholder2), "none");
    }
    void Break()
    {
        if (speed != 0)
        {
            if (speed == 0)
                cout << "현재속도 0\n";
            else
            {
                speed -= 10;
                cout << "감속";
            }
        }
    }
    // void addJuice(const char *cup1, const char *cup2)
    // {
    //     strcpy_s(cupholder1, sizeof(cupholder1), cup1);
    //     strcpy_s(cupholder2, sizeof(cupholder2), cup1);
    // }
    void Showinfo()
    {
        cout << "소유자 : " << owner << endl;
        cout << "현재속도 : " << speed << endl;
        cout << "연료량 : " << fuel << endl;
        cout << cupholder1;
        cout << cupholder2;
    }
};
int main()
{
    // Car hong = {"홍길동", 0, 50};
    // hong.addJuice("콜라", "사이다");
    // hong.Accel();
    // hong.Showinfo();
    Car jiks("jiks", 0, 1);
    jiks.Showinfo();
    return 0;
}