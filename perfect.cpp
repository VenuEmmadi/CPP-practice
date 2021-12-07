#include<bits/stdc++.h>
using namespace std;
void per(int val);
int main(){
	int num,sum = 0;
	cin>>num;
	for(int i=1;i<=num;i++){
		per(i);
	}
	return 0;
}
void per(int val){
	int temp = val,sum =0;;
	for(int i=1;i<val;i++){
		if(val%i == 0){
			sum = sum+i;
		}
	}
	if(sum == temp){
		cout<<temp<<" ";
	}
}
