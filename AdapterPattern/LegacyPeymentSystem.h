#pragma once
//#include <iostream>
import <string>;
import <memory>;
import <iostream>;
using namespace std;
class LegacyPeymentSystem
{
public:
	virtual void processPeyment(double amount); 
	virtual void cancelPeyment(double amount); 
	virtual ~LegacyPeymentSystem() = default;
};

