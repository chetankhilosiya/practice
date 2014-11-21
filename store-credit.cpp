#include<iostream>
using namespace std;

class Store {
	int case_num,credit,num_items;
	int *prices;
	public: 
	Store() {
		case_num = credit = num_items = 0;
		prices = NULL;
	}
	
	void readInput(int num) {
		case_num = num;
		cin>>credit>>num_items;
		if(prices) {
			delete []prices;
		}
		prices = new int[num_items];
		for(int i=0;i<num_items;i++) {
			cin>>prices[i];
		}
	}
	
	void writeOutput() {
		cout<<"total credit :"<<credit<<endl;
		cout<<"total items in store :"<<num_items<<endl;
		for(int i=0;i<num_items;i++) {
			cout<<prices[i]<<"  ";
		}
		cout<<endl;
	}
	
	void solve() {
		for(int i=0;i<num_items;i++) {
			for(int j=i+1;j<num_items;j++) {
				if(prices[i]+prices[j] == credit) {
					if(case_num != 1) {
						cout<<endl;
					}
					cout<<"Case #"<<case_num<<": "<<i+1<<" "<<j+1;
				}
			}
		}
	}
};

int main() {
	Store data;
	int test_cases=0;
	cin>>test_cases;
	
	for(int i=0;i<test_cases;i++) {
		data.readInput(i+1);
		data.solve();
		//data.writeOutput();
	}
	return 0;
}
