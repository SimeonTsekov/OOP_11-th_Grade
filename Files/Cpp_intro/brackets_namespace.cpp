#include <iostream>
#include <string>
#include <queue>
using namespace std;

namespace brackets{
	class Brackets{
		private:
			int opening_c = 0;
			int closing_c = 0;
			queue<char> brackets_q;
			string brackets_s;
		public:
			void read(){
				cout << "Enter brackets: ";
				getline(cin, brackets_s);
			
				for(int i=0; brackets_s[i]!='\0'; i++){
					if(brackets_s[i]=='('){
						brackets_q.push(brackets_s[i]);
						opening_c++;
					}
					if(brackets_s[i]==')'){
						brackets_q.push(brackets_s[i]);
						closing_c++;
					}
				}	
			}
	
			int are_balanced(){
				int are_balanced = 1;
				
				if(brackets_q.front() == ')')
					return 0;
	
				while(!brackets_q.empty()){
					if(brackets_q.front() == ')' && are_balanced==1){
						return 0;
					} else if(brackets_q.front() == '(') {
						are_balanced++;
					} else if(brackets_q.front() == ')'){
						are_balanced--;
					}
	
					brackets_q.pop();
				}
	
				return are_balanced;
			}

			int return_count(){
				int count[2];
				count[0] = opening_c;
				count[1] = closing_c;
				cout << "Opening: " << count[0] << " Closing: " << count[1] << endl;
				return *count;
			}
	};
};
