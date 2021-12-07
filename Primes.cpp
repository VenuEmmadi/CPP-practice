#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int j=1;j<=num;j++){
		int count = 0;
			for(int i=1;i<=j;i++){
				if(j%i == 0){
					count++;
				}
			}
			if(count == 2){
				cout<<j<<" ";
			}
	}
	return 0;
}
