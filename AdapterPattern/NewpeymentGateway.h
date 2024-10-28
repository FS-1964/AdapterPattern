#pragma once
import <string>;
import <memory>;
import <iostream>;
using namespace std;
class NewpeymentGateway
{
public:
	virtual void initatePeyment(double amount, string currency);
	virtual void reversePeyment(double amount, string currency); 
	virtual void checkPeymentStatus(int transactionid); 
	virtual ~NewpeymentGateway() = default;
};

