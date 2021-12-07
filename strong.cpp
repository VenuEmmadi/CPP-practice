#include<bits/stdc++.h>
using namespace std;
int fact(int num);
int main(){
	int num,temp,sum=0,rem;
	cin>>num;
	temp = num;
	while(num>0){
		rem = num%10;
		sum = sum + fact(rem);
		num = num/10;
	}
	if(sum == temp){
		cout<<"strong";
	}
	else{
		cout<<"not strong";
	}
	return 0;
}
int fact(int num){
	int f=1,i;
	for(i=1;i<=num;i++){
		f=f*i;
	}
	return f;
}
