#include "Time.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int h, m, s;
    cout << "Введите часы: ";
    cin >> h;
    cout << "Введите минуты: ";
    cin >> m;
    cout << "Введите секунды: ";
    cin >> s;
    Time t1(h, m, s);
    t1.display();
    int additionalSeconds;
    cout << "Введите количество дополнительных секунд: ";
    cin >> additionalSeconds;
    Time t2 = t1.addSeconds(additionalSeconds);
    t2.display();
    //cout << "Количество объектов времени: " << Time::getCount() << endl;
    return 0;
}