#pragma once
#include "LegacyPeymentSystem.h"
#include "NewpeymentGateway.h"
class PeymentAdapter : public LegacyPeymentSystem
{
	shared_ptr<NewpeymentGateway> _newgateway;
	shared_ptr<LegacyPeymentSystem> _legacysystem;
	string _currency;
	bool _isLegacyUser;
public:
	PeymentAdapter(shared_ptr<NewpeymentGateway> newpeymentgateway, 
		           shared_ptr<LegacyPeymentSystem> legacysystem,string currency,bool islegacyuser):
		           _newgateway(newpeymentgateway), _legacysystem(legacysystem),
		           _currency(currency), _isLegacyUser(islegacyuser){}
	void processPeyment(double amount) override;
	void cancelPeyment(double amount) override;
	void checkStatus(int transactionid);
};

