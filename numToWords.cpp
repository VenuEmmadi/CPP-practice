#include<bits/stdc++.h>
#include<cstring>
#include<string.h>
using namespace std;
void numToWords(int n);
int main(){
	int num;
	cin>>num;
	numToWords(num);
	return 0;
}
void numToWords(int n){
	  string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	  int temp = n;
	  std::string str ;
	  str = std::to_string(n);
	  for(int i=0;i<str.length();i++){
		  char x=str[i];
		  int x1 = x - '0';
	  	  cout<<arr[x1]<<" ";
	  }
}
