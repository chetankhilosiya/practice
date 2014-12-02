#include<iostream>
#include<algorithm>
#include<gmp.h>
using namespace std;
int main() {
	int test_cases;
	cin>>test_cases;
	int num_values;
	for(int i=0; i<test_cases; i++) {
		cin>>num_values;
		long long int vector1 [num_values];
		long long int vector2 [num_values];
		for(int j=0; j<num_values; j++) {
			cin>>vector1[j];
		}
		for(int j=0; j<num_values; j++) {
			cin>>vector2[j];
		}
		sort(vector1,vector1+num_values);
		sort(vector2,vector2+num_values);
		mpz_t product,temp;
		mpz_inits(product,temp,NULL);
		for(int j=0,k=num_values-1; j<num_values; j++,k--) {
			mpz_set_si(temp,(vector1[j] * vector2[k]));
			mpz_add(product,product,temp);
		}
		if(i != 0) {
			cout<<endl;
		}
		cout<<"Case #"<<i+1<<": "<<product;
	}
	return 0;
}
