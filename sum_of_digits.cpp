#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,rem=0,sum=0;
	cin>>num;
	while(num!=0){
		rem = num%10;
		sum = sum + rem;
		num = num/10;
	}
	cout<<sum;
	return 0;
}
