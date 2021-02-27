#ifndef HOME_CLIENT
#define HOME_CLIENT

#include "BaseClientSingle.h"
#include "BaseClientDouble.h"

class HomeClientSingle : public BaseClientSingle{
	HomeClientSingle();
	HomeClientSingle(int rate, float usedPower, int deliveryPrice, int distributionPrice);
};

class HomeClientDouble : public BaseClientDouble{
	HomeClientDouble();
	HomeClientDouble(int dayRate, int nightRate, float usedPowerDay, float usedPowerNight, int deliveryPrice, int distributionPrice);
};

#endif
