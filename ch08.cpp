// 01 friend 에약어
// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void AddX(Simple& ob){
//         ob.x++;
//     }
// };
// class Simple{
//     private: x;
//     friend A; //  friend 설정
// public:
// }

// 식당 예약 클래스

// #include <iostream>
// using namespace std;
// class Restorant;
// class Reservation;
// class Restorant
// {
// private:
//     static string room[10]; // 예약가능한방
//     static int cnt;
//     friend class Reservation;
// };
// class Reservation
// {
// public:
//     void RequestRev(string name)
//     {
//         //?Retorant의 room에 cnt번째 배열요소에 전달받은 name 저장
//         // ?Restorant의 cnt증가

//         for(int i = 0; i < Restorant::room->length(); i++){
//             if(Restorant::room[i].find(name) != -1){
//                 cout << "동일 예약자 존재";
//             }
//         }
//         if(Restorant::cnt >= Restorant::room->length()){
//             cout << "모든 예약이 채워져 예약 불가능"<<endl;
//             return;
//         }
//         for(int i=0; i < Restorant::room->length(); i++){
//             if(Restorant::room[i].find("NULL")){
//                 Restorant::room[i]=name;
//                 Restorant::cnt++;
//                 cout << name << " 님 예약 완료\n";
//                 return;
//             }
//         }
//     }
//     void CancelRev(string name)
//     {
//         // name에 해당하는 idx찾아 제거(->NULL) , cnt 감소
//     }
// };
// string Restorant::room[10] = {"NULL"};
// int Restorant::cnt = 0;
// int main()
// {
//     Restorant retorant;
//     Reservation rev;
//     rev.RequestRev("1길동");
//     rev.RequestRev("2길동");
//     rev.RequestRev("3길동");
//     rev.RequestRev("4길동");
//     rev.RequestRev("5길동");
//     rev.RequestRev("6길동");
//     rev.RequestRev("7길동");

//     return 0;
// }

