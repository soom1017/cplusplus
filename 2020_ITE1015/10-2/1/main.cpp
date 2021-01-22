#include "clock_time.h"
#include "clocks.h"
#include <iostream>
#include <vector>
using namespace::std;

int main()
{
	int input;
	cin >> input;
	vector<Clock*> clocks;
	clocks.push_back(new SundialClock(0, 0, 0));
	clocks.push_back(new CuckooClock(0, 0, 0));
	clocks.push_back(new GrandFatherClock(0, 0, 0));
	clocks.push_back(new WristClock(0, 0, 0));
	clocks.push_back(new AtomicClock(0, 0, 0));

	for(int i=0;i<clocks.size();i++)
		clocks[i]->reset();
	cout << "Reported clock times after resetting:" << endl;
	for(int i=0;i<clocks.size();i++)
		clocks[i]->displayTime();
	
	cout << "Running the clocks ..." << "\n" << endl;
	//simulation goes
	for(int i=0;i<clocks.size();i++)
	{
		for(int j=0;j<input;j++)
		{
			clocks[i]->tick();
		}
	}

	cout << "Reported clock times after running:" << endl;
	for(int i=0;i<clocks.size();i++)
		clocks[i]->displayTime();

	for(int i=0;i<clocks.size();i++)
		delete clocks[i];
	return 0;
}
