#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,count=0;
	cin>>num;
	for(int i=1;i<=num;i++){
		if(num%i == 0){
			count++;
		}
	}
	if(count == 2){
		cout<<"prime";
	}
	else{
		cout<<"not Prime";
	}
	return 0;
}

