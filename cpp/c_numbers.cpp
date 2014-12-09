#include<iostream>
#include<iomanip>
#include<gmp.h>
using namespace std;
int main() {
	int test_cases;
	mpf_t root_five;
	mpf_set_default_prec(1024);
	mpf_init(root_five);
	mpf_sqrt_ui(root_five,5);
	mpf_t sum3;
	mpf_init(sum3);
	mpf_add_ui(sum3,root_five,3);
	cin>>test_cases;
	long long int number;
	mpf_t answer;
	mpf_init(answer);
	mpz_t answer_3_digit;
	mpz_init(answer_3_digit);
	for(int i=0; i<test_cases; i++) {
		cin>>number;
		mpf_pow_ui(answer,sum3,number);
		mpf_trunc(answer,answer);
		mpz_set_f(answer_3_digit,answer);
		mpz_mod_ui(answer_3_digit,answer_3_digit,1000);
		if(i != 0) {
			cout<<endl;
		}
		cout<<"Case #"<<i+1<<": ";
		cout<<setw(3)<<setfill('0')<<answer_3_digit;
	}
	return 0;
}
