#ifndef BASE_CLIENT_DOUBLE
#define BASE_CLIENT_DOUBLE

class BaseClientDouble{
	protected:
		int dayRate;
		int nightRate;
		int deliveryPrice;
		int distributionPrice;
	public:
		float usedPowerDay;
		float usedPowerNight;

		BaseClientDouble();
		BaseClientDouble(int dayRate, int nightRate, float usedPowerDay, float usedPowerNight, int deliveryPrice, int distributionPrice);

		float calcBill();
};
#endif
