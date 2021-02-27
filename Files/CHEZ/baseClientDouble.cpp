#include "baseClientDouble.h"

BaseClientDouble::BaseClientDouble() {}

BaseClientDouble::BaseClientDouble(int idayRate,int nightRate, float usedPowerDay, float usedPowerNight, int deliveryPrice, int distributionPrice) : 
	dayRate(dayRate), 
	nightRate(nightRate),
	usedPowerDay(usedPowerDay),
	usedPowerNight(usedPowerNight),	
	deliveryPrice(deliveryPrice), 
	distributionPrice(distributionPrice) {}

float BaseClientDouble::calcBill(){
	return ((this->usedPowerDay * (this->dayRate + this->deliveryPrice + this->distributionPrice)) + 
			(this->usedPowerNight * (this->nightRate + this->deliveryPrice + this->distributionPrice)));
}
