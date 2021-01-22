#include "clock_time.h"
#include "clocks.h"
#include <iostream>
using namespace std;

Clock::Clock(int hour, int minute, int second, double driftPerSecond)
{
	ClockTime const _initialTime(hour, minute, second, 1);
	_clockTime.setTime(_initialTime);
	_driftPerSecond = driftPerSecond;
}

void Clock::reset()
{
	_clockTime.reset();
}

void Clock::tick()
{
	_clockTime.increment();
	_totalDrift = _clockTime.deltaTime() * _driftPerSecond;
}

void SundialClock::displayTime()
{
	cout << "SundialClock ";
	_clockTime.display();
	cout << ", total drift: " << _totalDrift << endl;
}
void CuckooClock::displayTime()
{
        cout << "CuckooClock ";
        _clockTime.display();
        cout << ", total drift: " << _totalDrift << endl;
}
void GrandFatherClock::displayTime()
{
        cout << "GrandFatherClock ";
        _clockTime.display();
        cout << ", total drift: " << _totalDrift << endl;
}
void WristClock::displayTime()
{
        cout << "WristClock ";
        _clockTime.display();
        cout << ", total drift: " << _totalDrift << endl;
}
void AtomicClock::displayTime()
{
        cout << "AtomicClock ";
        _clockTime.display();
        cout << ", total drift: " << _totalDrift << "\n" << endl;
}

