#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,a=0,b=1,n=2;
	int c;
	cin>>num;
	cout<<a<<" "<<b<<" ";
	while(n!=num){
		c = a + b;
		a = b;
		b = c;
		cout<<c<<" ";
		n++;
	}
	return 0;
}
