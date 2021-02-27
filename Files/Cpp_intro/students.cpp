#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class FullException{};
class InvalidException{};
class ShortException{};

class StudentInfo{
	private:
		string name;
		vector<double> grades;

	public:
		StudentInfo(){
			this->name = {};
		}
		
		StudentInfo(string name, vector<double> grades){
			if(grades.size() > 10){
				throw FullException();
			}
		
			for(int i=0; i<grades.size(); i++){
				if(grades[i]<2 || grades[i]>6){
					throw InvalidException();
				}
			}
	
			if(name.size()<5){
				throw ShortException();
			}
		
			this->name = name;
			this->grades = grades;
		}
			
		string getName(){
			return this->name;
		}

		vector<double> getMarks(){
			return this->grades;
		}

		void addMark(double new_mark){
			if(this->grades.size() == 10){
				throw FullException();
			}

			if(new_mark<2 || new_mark>6){
				throw InvalidException();
			}

			grades.push_back(new_mark);
		}

		double getAverage(){
			double average = 0;
			
			for(double grade : grades){
				average += grade;
			}

			return average / grades.size();
		}

		string toString(){
			stringstream ss;
			ss << name << ':';

			for(double grade : grades){
				ss << ' ' << grade;
			}

			ss << ' ' << '[' << getAverage() << ']';

			return ss.str();
		}
};

int main(){
	vector<double> grades;
	grades.push_back(4);
	grades.push_back(3);

	try{
		StudentInfo student("Simeon", grades);	
	
		cout << student.getName() << endl;

		student.addMark(6);	
		student.addMark(5);	

		grades = student.getMarks();

		for(int i=0; i<grades.size(); i++){
			cout << grades[i] << endl;
		}

		double average = student.getAverage();

		cout << student.toString() << endl;

	} catch (InvalidException ex){
		cout << "Invalid grades" << endl;
	} catch (FullException ex){
		cout << "Max grades" << endl;
	} catch (ShortException ex){
		cout << "Name is too short" << endl;
	}


	
	return 0;
}

