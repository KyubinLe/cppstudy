#include "computer.cpp"
int main()
{
    computer hong = {"홍길동 ", "11-22-33 ", "i7 ", "16g", "1T", 0};
    hong.Showinfo();
    hong.Poweron();
    hong.Poweroff();
    hong.appstart("앱스토어");
}