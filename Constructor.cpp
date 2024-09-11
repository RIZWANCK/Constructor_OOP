#include<iostream>
using namespace std;

class MultiplyNum{
	public:
		int n1;
		int n2;
		int k;
		MultiplyNum(){
			cout<<"Enter n1: ";
			cin>>n1;
			cout<<"Enter n2: ";
			cin>>n2;
			k = n1*n2;
			cout<<n1<<"*"<<n2<<" is "<<k;
		}
};
int main(){
	MultiplyNum m;
	return 0;
}
