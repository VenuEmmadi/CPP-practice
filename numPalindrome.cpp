#include<bits/stdc++.h>
using namespace std;
int main(){
	int rev,num,rem = 0;
	cin>>num;
	int temp = num;
	while(num!=0){
		rem = num%10;
		rev = rev*10+rem;
		num = num / 10;
	}
	if(temp == rev){
		cout<<"num is palindrome";
	}
	else{
		cout<<"num is not palindrome";
	}
	return 0;
}

