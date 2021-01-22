#ifndef CLOCKS_H__
#define CLOCKS_H__
#include "clock_time.h"

#define SUNDIAL_ERR 0.0
#define CUCKOO_ERR 0.0
#define GRAND_ERR 0.000694444
#define WRIST_ERR 0.000347222
#define ATOMIC_ERR 0.000034722
class Clock
{
public:
	Clock() {};
	Clock(int hour, int minute, int second, double driftPerSecond);
	virtual ~Clock() {};

	void reset();
	void tick();
	virtual void displayTime() = 0;
protected:
	ClockTime _clockTime;
	double _driftPerSecond;
	double _totalDrift;
};

class NaturalClock: public Clock
{
public:
	NaturalClock() {};
	NaturalClock(int hour, int minute, int second, double driftPerSecond)
		: Clock(hour, minute, second, driftPerSecond) {};
	virtual ~NaturalClock() {};

	virtual void displayTime() = 0;
};
class SundialClock: public NaturalClock
{
public:
	SundialClock(int hour, int minute, int second)
		: NaturalClock(hour, minute, second, SUNDIAL_ERR) {};
	virtual ~SundialClock() {};

	virtual void displayTime();
};

class MechanicalClock: public Clock
{
public:
        MechanicalClock() {};
        MechanicalClock(int hour, int minute, int second, double driftPerSecond)
                : Clock(hour, minute, second, driftPerSecond) {};
        virtual ~MechanicalClock() {};

        virtual void displayTime() = 0;
};
class CuckooClock: public MechanicalClock
{
public:
        CuckooClock(int hour, int minute, int second)
                : MechanicalClock(hour, minute, second, CUCKOO_ERR) {};
        virtual ~CuckooClock() {};

        virtual void displayTime();
};
class GrandFatherClock: public MechanicalClock
{
public:
        GrandFatherClock(int hour, int minute, int second)
                : MechanicalClock(hour, minute, second, GRAND_ERR) {};
        virtual ~GrandFatherClock() {};

        virtual void displayTime();
};

class DigitalClock: public Clock
{
public:
        DigitalClock() {};
        DigitalClock(int hour, int minute, int second, double driftPerSecond)
                : Clock(hour, minute, second, driftPerSecond) {};
        virtual ~DigitalClock() {};

        virtual void displayTime() = 0;
};
class WristClock: public DigitalClock
{
public:
        WristClock(int hour, int minute, int second)
                : DigitalClock(hour, minute, second, WRIST_ERR) {};
        virtual ~WristClock() {};

        virtual void displayTime();
};

class QuantumClock: public Clock
{
public:
        QuantumClock() {};
        QuantumClock(int hour, int minute, int second, double driftPerSecond)
                : Clock(hour, minute, second, driftPerSecond) {};
        virtual ~QuantumClock() {};

        virtual void displayTime() = 0;
};
class AtomicClock: public QuantumClock
{
public:
        AtomicClock(int hour, int minute, int second)
                : QuantumClock(hour, minute, second, ATOMIC_ERR) {};
        virtual ~AtomicClock() {};

        virtual void displayTime();
};
#endif
