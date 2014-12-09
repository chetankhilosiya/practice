#include<iostream>
using namespace std;

class Flavor {
	private: int number,type;
	
	public:
		void setFlavor(int num,int type) {
			this->number = num;
			this->type = type;
		}
};

int main() {
	int test_cases;
	cin>>test_cases;
	int num_flavors,num_customers;
	Flavor all[2000][2000];
	for(int i=0; i < test_cases; i++) {
		cin>>num_flavors>>num_customers;
		for(int j=0; j<num_customers; j++) {
			int num_likes;
			for(int k=0; k<num_likes; k++) {
				
			}
		}
	}
	return 0;
}
