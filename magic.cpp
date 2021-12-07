#include<bits/stdc++.h>
using namespace std;
int rev(int num);
int main(){
	int num,temp,rem,sum=0;
	cin>>num;
	temp = num;
	while(num>0){
		rem = num%10;
		sum = sum + rem;
		num=num/10;
	}
	int r = rev(sum);
	cout<<r<<" "<<sum<<endl;
	if(sum*r == temp){
		cout<<"magic";
	}
	else{
		cout<<"not magic";
	}
	
	return 0;
}
int rev(int num){
	int rev=0,rem;
	while(num>0){
		rem = num%10;
		rev = rev*10 + rem;
		num=num/10;
	}
	return rev;
}
