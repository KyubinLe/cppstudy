#include "computer.h"
#include <iostream>
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