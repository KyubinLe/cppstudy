// // #include <iostream>
// // using namespace std;
// // #include <string>

// // int cnt = 0;
// // class Simple {
// //     public:
// //     int x;
// //     public:
// //     Simple():x(0){cout << "주소" << this << " 디폴트 생성자 호출!" << endl;}
// //     void Showx(){ cout<< "x : " << x << endl;}
// //     ~Simple(){ cout << x << " 소멸자 호출!" << endl;}
// // };

// // Simple createoj(){
// //     Simple obj;
// //     return obj;
// // }

// // int main(){
// //     Simple ob = createoj();
// //     cout << "주소 : " << &ob << endl;
// //     ob.x = 20;
// // }

// // class Simple
// // {
// // public:
// //     int x;

// // public:
// //     Simple(string name)
// //     {
// //         this->name = name;
// //         cout << "주소 : " << this << " 디폴트 생성자 호출 ! " << endl;
// //     }
// //     ~Simple() { cout << " 소멸자허츨!" << endl; }
// // };

// // Simple *createobj()
// // {
// //     Simple *obj = new Simple; // 힙영역에 객체 생성
// //     return obj;
// // }

// // int main()
// // {
// //     Simple *ob = createobj();
// //     cout << "메인에서 ob주소 : " << ob << endl;
// //     delete ob;

// //     return 0;
// // }

// #include <iostream>
// #include <string>
// using namespace std;

// class Profile
// {
//     char *name;
//     char *addr;
//     int age;
//     char gender;

// public:
//     Profile(const char *name, const char *addr, int age, char gender) : age(age), gender(gender)
//     {
//         // name addr 동적할당해서 연결 --> new 로
//     }
//     void ShowProfile()
//     {
//         cout << "이름 : " << name << "\n주소 : " << addr << "\n나이 : " << age << "\n성별 : " << gender << endl;
//     }
    
// };
//     Profile createProfile(const char *name, const char *addr, int age, char gender)
//     {
//         // 동적할당 객체생성
//     }
//   ~Profile(){
//     //   멤버내 동적할당 했던 공간도 함께 소멸
//   }  void removeProfile(Profile obj)
//     {
//         obj.~Profile();
//     }
// int main()
// {
//     Profile hong = createProfile("홍길동", "대구광시", 30, "남");

//     cout << "----";
//     removeProfile(hong);
// }

// 