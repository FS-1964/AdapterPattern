#include "Timer.h"

Timer::Timer()
{
	
		start = chrono::high_resolution_clock::now();
		
}

Timer::~Timer()
{
	
	
	end = chrono::high_resolution_clock::now();

	auto duration = end - start;
	auto ms = duration.count();
	auto val = ms / 1000000l;
	cout << "Timer took:" << val << "ms" << endl;
}
