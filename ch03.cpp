// 객체 = 현실 존재 사물 / 프로그래밍 객체 > 메모리 공간을 차지하는 데이터 집합 / 객체지향 > 객체의 일부속성과 기능만 추출하여 메모리 공간에서 사용한다하여 객체지향 / 클래스 > 동일 종류의 객체를 반복생산하기 위해 미리선언된자료형

// 에어컨 속성 : 모델명, 상품명, fan, eva, 모터, 전력량 기능 : 제습,냉방,전원
// 자동차 속성 : 소유자,차종,연료,속도 기능 : 가속,감속

#include <iostream>
using namespace std;

// class car
// {
// public:
//     char owner[10];
//     int speed;
//     int fuel;
// };
// int main()
// {
//     car hong = {"가", 0, 100};
//     cout << hong.owner << endl;
//     cout << hong.speed << endl;
//     cout << hong.fuel << endl;
//     return 0;
// }

class computer{
    public:
    char owner[20];
    char serial[50];
    char cpu[10];
    char ram[20];
    char disk[20];
};
int main(){
    computer hong = {"홍길동 ", "11-22-33 ", "i7 ", "16g", "1T"};
    cout << hong.owner << hong.serial << hong.cpu << hong.disk;
}