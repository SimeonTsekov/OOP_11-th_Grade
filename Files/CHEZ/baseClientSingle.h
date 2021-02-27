#ifndef BASE_CLIENT_SINGLE
#define BASE_CLIENT_SINGLE

class BaseClientSingle{
	protected:
		int rate;
		int deliveryPrice;
		int distributionPrice;
	public:
		float usedPower;

		BaseClientSingle();
		BaseClientSingle(int rate, int usedPower, int deliveryPrice, int distributionPrice);

		float calcBill();
};

#endif
