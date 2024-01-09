#include "Time.h"
#include <iostream>
using namespace std;
int Time::count = 0;
Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
    while (seconds >= 60) { // Проверяем, что секунды не больше 59
        seconds -= 60;
        minutes++;
    }
    while (minutes >= 60) { // Проверяем, что минуты не больше 59
        minutes -= 60;
        hours++;
    }
    while (hours >= 24) { // Проверяем, что часы не больше 23
        hours -= 24;
    }
    count++;
}
Time::~Time()
{
    count--;
}
Time Time::addSeconds(int s)
{
    int totalSeconds = hours * 3600 + minutes * 60 + seconds + s;
    int newHours = totalSeconds / 3600 % 24;
    int newMinutes = (totalSeconds / 60) % 60;
    int newSeconds = totalSeconds % 60;

    return Time(newHours, newMinutes, newSeconds);
}
int Time::getCount() 
{
    return count;
}
void Time::display() 
{
    cout << "Время: " << hours << " часов, " << minutes << " минут, " << seconds << " секунд." << endl;
}