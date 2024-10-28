#include "PeymentAdapter.h"

void PeymentAdapter::processPeyment(double amount) 
{
	if (_isLegacyUser)
	{
		_legacysystem->processPeyment(amount);
	}
	else {
		_newgateway->initatePeyment(amount, _currency);
	}
}

void PeymentAdapter::cancelPeyment(double amount)
{
	if (_isLegacyUser)
	{
		_legacysystem->cancelPeyment(amount);
	}
	else {
		_newgateway->reversePeyment(amount, _currency);
	}
}

void PeymentAdapter::checkStatus(int transactionid)
{
	if (!_isLegacyUser)
	{
		_newgateway->checkPeymentStatus(transactionid);
	}
	else {
		cout << "Legacy system:status is not available!" << endl;
	}
}
