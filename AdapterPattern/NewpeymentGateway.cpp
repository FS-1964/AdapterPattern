#include "NewpeymentGateway.h"

void NewpeymentGateway::initatePeyment(double amount, string currency)
{
	cout << "New gateway:initiate peyment of $" << amount <<currency<< endl;
}

void NewpeymentGateway::reversePeyment(double amount, string currency)
{
	cout << "New gateway:reverse peyment of $" << amount <<currency<< endl;
}

void NewpeymentGateway::checkPeymentStatus(int transactionid)
{
	cout << "New gateway:checking status of transaction ID:" << transactionid << endl;
}
