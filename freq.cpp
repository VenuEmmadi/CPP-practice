#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,c=0,rem;
	cin >> num;
	int temp=num,frequency[10];
	for(int i=0;i<10;i++){
		frequency[i]=0;
	}
	while(num>0){
		rem = num%10;
		frequency[rem]++;
		num = num/10;
	}
	for(int i=0;i<10;i++){
		if(frequency[i]>1){
			printf("%d - %d\n",i,frequency[i]);
		}
	}
	return 0;
}
