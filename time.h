#pragma once
#include <iostream>
class Time 
{
private:
    int hours;
    int minutes;
    int seconds;
    static int count;
public:
    Time(int h, int m, int s);
    ~Time();
    Time addSeconds(int s);
    static int getCount();
    void display();
};