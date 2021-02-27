#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CarCatalogue{
	private:
		string manufacturer;
		vector<string> models;
	public:
		CarCatalogue(){
			manufacturer = {};
		}

		CarCatalogue(string manufacturer){
			this->manufacturer = manufacturer;			
		}

		string getBrand(){
			return manufacturer;
		}

		vector<string> getModels(){
			return models;
		}

		void addModel(string model_name){
			models.push_back(model_name);
		}

};

int main(){
	CarCatalogue catalogue("Smart");
	
	string manufacturer = catalogue.getBrand();
	cout << catalogue.getBrand() << endl;

	catalogue.addModel("???");
	

	return 0;
}
