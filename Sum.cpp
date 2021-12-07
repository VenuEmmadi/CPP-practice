#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum=0,n;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum = sum+i;
	}
//sum = n*(n+1)/2;
	cout<<sum;
	return 0;
}
