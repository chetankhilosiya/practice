#include<cstdio>
#include<iostream>
using namespace std;

void match(char c,int *s) {
	
	switch(c) {
		case 'a':*s = 2;break;
		case 'b':*s = 22;break;
		case 'c':*s = 222;break;
		case 'd':*s = 3;break;
		case 'e':*s = 33;break;
		case 'f':*s = 333;break;
		case 'g':*s = 4;break;
		case 'h':*s = 44;break;
		case 'i':*s = 444;break;
		case 'j':*s = 5;break;
		case 'k':*s = 55;break;
		case 'l':*s = 555;break;
		case 'm':*s = 6;break;
		case 'n':*s = 66;break;
		case 'o':*s = 666;break;
		case 'p':*s = 7;break;
		case 'q':*s = 77;break;
		case 'r':*s = 777;break;
		case 's':*s = 7777;break;
		case 't':*s = 8;break;
		case 'u':*s = 88;break;
		case 'v':*s = 888;break;
		case 'w':*s = 9;break;
		case 'x':*s = 99;break;
		case 'y':*s = 999;break;
		case 'z':*s = 9999;break;
		case ' ':*s = 0;
	}
}

int main() {
	int task_num;
	cin>>task_num;
	cin.ignore();
	string line;
	int num,prev_num=-1;
	for(int i=0;i<task_num;i++) {
		getline(cin,line);
		int at = 0, len = line.length();
		if(i != 0) {
			cout<<endl;
		}
		cout<<"Case #"<<i+1<<": ";
		while(at < len) {
			match(line[at],&num);
			if(prev_num == num%10) {
				cout<<' ';
			}
			cout<<num;
			at++;
			prev_num = num%10;
		}
	}
}


