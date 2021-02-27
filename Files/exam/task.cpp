#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

class EmptyFormulaException{};
class InvalidQuantityException{};
class InvalidEfficiencyException{};
class EmptyException{};

class Result{
	public:
		string formula;
		float quantity;
		float efficiency;

		Result(){};
		Result(string formula, float quantity, float efficiency){
			this->formula = formula;
			this->quantity = quantity;
			this->efficiency = efficiency;
		}
		float getLoss(){
			double loss;
			loss = this->quantity * (1 - this->efficiency);
		}

};

class ResultCatalogue{
	private:
		vector<Result> results;
	
	public:
		ResultCatalogue(){}
		ResultCatalogue(vector<Result> results){
			this->results = results;
		}

		vector<Result> getResults(){
			return this->results;
		}

		void addResult(Result newResult){
			if(newResult.formula.size() == 0){
				throw EmptyFormulaException();
			} else if (newResult.quantity < 0){
				throw InvalidQuantityException();
			} else if (newResult.efficiency < 0 || newResult.efficiency > 1){
				throw InvalidEfficiencyException();
			}

			this->results.push_back(newResult);
		}

		static bool compareLoss(Result result_1, Result result_2){
			return result_1.getLoss() < result_2.getLoss();
		}

		void sortByLoss(){
			if(this->results.size() == 0){
				throw EmptyException();
			}

			sort(results.begin(), results.end(), compareLoss);	
		}

		string toString(){
			stringstream ss;
			string result_string;

			
			for(Result result : this->results){
				int i=0;
				ss << result.formula << ' ' << '~' << ' ' << result.quantity << ' ' << '~' << ' ' << result.efficiency << '\n';
			}

			return result_string;
		}

		void fromString(string results){
			stringstream ss;
			

		}

};

int main(){
	
	return 0;
}
