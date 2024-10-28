// AdapterPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NewpeymentGateway.h"
#include "LegacyPeymentSystem.h"
#include "PeymentAdapter.h"
#include "Timer.h"

void uniquepointer() {
	for (int i = 0; i < 5; i++)
	{

		unique_ptr<LegacyPeymentSystem> legacy = make_unique<LegacyPeymentSystem>();
		legacy->processPeyment(190);
		this_thread::sleep_for(chrono::milliseconds(1000));
		cout << i << endl;
	}
}
void sharedpointer() {
	for (int i = 0; i < 5; i++)
	{

		shared_ptr<NewpeymentGateway> _newgateway = make_shared<NewpeymentGateway>();
		shared_ptr<LegacyPeymentSystem> _legacysystem = make_shared<LegacyPeymentSystem>();

		PeymentAdapter legacyUserAdapter(_newgateway, _legacysystem, "USD", true);
		legacyUserAdapter.processPeyment(100);
		legacyUserAdapter.cancelPeyment(50);
		legacyUserAdapter.checkStatus(123456);
		cout << "###############################################" << endl;
		PeymentAdapter newUserAdapter(_newgateway, _legacysystem, "USD", false);
		newUserAdapter.processPeyment(200);
		newUserAdapter.cancelPeyment(100);
		newUserAdapter.checkStatus(56789);
	}
}
int main()
{

	Timer functiontimer;
	sharedpointer();
	//uniquepointer();
}
