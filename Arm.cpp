#include<bits/stdc++.h>
using namespace std;
void arm(int val);
int main(){
	int num;
   cout << "Enter an integer: ";
   cin >> num;
   for(int i=1;i<=num;i++){
   		arm(i);
   }
   return 0;
}
void arm(int val){
   int originalNum, remainder, n = 0, result = 0, power;
   originalNum = val;
   while (originalNum != 0) {
      originalNum /= 10;
      ++n;
   }
   originalNum = val;
	while (originalNum != 0) {
      remainder = originalNum % 10;
      power = round(pow(remainder, n));
      result += power;
      originalNum /= 10;   }

   if (result == val)
      cout << result <<" ";
}
