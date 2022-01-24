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