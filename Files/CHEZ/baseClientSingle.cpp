#include "baseClientSingle.h"

BaseClientSingle::BaseClientSingle() {}

BaseClientSingle::BaseClientSingle(int rate, int usedPower, int deliveryPrice, int distributionPrice) : 
	rate(rate), 
	usedPower(usedPower), 
	deliveryPrice(deliveryPrice), 
	distributionPrice(distributionPrice) {}

float BaseClientSingle::calcBill(){
	return this->usedPower * (this->rate + this->deliveryPrice + this->distributionPrice);
}
