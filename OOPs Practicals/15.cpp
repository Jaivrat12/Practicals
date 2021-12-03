/*
Write a program to overload two operators > and - as follow:
Let t1, t2 and t3 be three time objects of time class,
if (t1 > t2)
    t3 = t1 - t2;
else
    t3 = t2 - t1;
*/
#include <iostream>
using namespace std;

class Time {

    int hours, min, sec;
    public:
    Time() { hours = min = sec = 0; }
    Time(int h, int m, int s) {

        hours = h, min = m, sec = s;
        if (sec >= 60) {
            min += sec / 60; sec %= 60;
        }
        if (min >= 60) {
            hours += min / 60; min %= 60;
        }
    }

    void print() {
        cout << hours << ":" << min << ":" << sec << '\n';
    }

    int get_full_seconds() {
        return hours * 3600 + min * 60 + sec;
    }

    bool operator>(Time t) {
        return get_full_seconds() > t.get_full_seconds();
    }

    Time operator-(Time t) {
        return Time(0, 0, get_full_seconds() - t.get_full_seconds());
    }
};

int main() {

    Time t1(10, 30, 12), t2(12, 58, 36), t3;
    cout << "t1 = "; t1.print();
    cout << "t2 = "; t2.print();

    if (t1 > t2) {
        t3 = t1 - t2;
        cout << "t3 = t1 - t2 = "; t3.print();
    } else {
        t3 = t2 - t1;
        cout << "t3 = t2 - t1 = "; t3.print();
    }

    return 0;
}

// O/P:
// t1 = 10:30:12
// t2 = 12:58:36
// t3 = t2 - t1 = 2:28:24