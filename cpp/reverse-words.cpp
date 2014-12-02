#include<iostream>
#include<stack>
using namespace std;
int main() {
	int test_cases=0;
	cin>>test_cases;
	cin.ignore();
	for(int i=0;i<test_cases;i++) {
		string s;
		getline(cin,s);
		int j=0,len;
		len=s.length();
		stack<string> mystack;
		while(j < len) {
			char temp[1000]="";
			int k=0;
			while(s[j] != ' ' && s[j] != '\0') {
				temp[k++] = s[j++];
			}
			j++;
			temp[k] = '\0';
			mystack.push(temp);
		}
		if(i != 0) {
			cout<<endl;
		}
		cout<<"Case #"<<i+1<<":";
		while(!mystack.empty()) {
			cout<<" "<<mystack.top();
			mystack.pop();
		}
	}
	return 0;
}
