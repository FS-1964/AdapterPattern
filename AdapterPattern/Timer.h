#pragma once
import <iostream>;
import <chrono>;
import <thread>;
using namespace std;
class Timer
{
	chrono::time_point<chrono::steady_clock> start, end;
	
	chrono::duration<float> duration;
public:
	
	Timer(); 
	~Timer(); 
};

