//Find the Rotation Count in Rotated Sorted array ::
/* Consider an array of distinct numbers sorted in increasing order. The array has
been rotated(clockwise) k number of times. Given such an array, find the value of k.*/
/*Input : arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
Explanation : Initial array must be {2, 3,
6, 12, 15, 18}. We get the given array after 
rotating the initial array twice.*/
/*Method 2 (Efficient Using Binary Search) 
Here also we find the index of minimum element, but using Binary Search. The idea is based on the below facts : 
 

The minimum element is the only element whose previous is greater than it. If there is no previous element, then there is no rotation (first element is minimum). We check this condition for middle element by comparing it with (mid-1)’th and (mid+1)’th elements.
If the minimum element is not at the middle (neither mid nor mid + 1), then minimum element lies in either left half or right half. 
If middle element is smaller than last element, then the minimum element lies in left half
Else minimum element lies in right half.
*/
#include<bits/stdc++.h>
using namespace std;
int countRotations(int arr[],int low,int high){
	if (high < low)//whwn array is not rotated at all.
        return 0;
	if(high == low)//if only one element.
		return low;
	int mid = (high+low)/2;
	if(mid<high && arr[mid+1]<arr[mid])//checking mid+1 is minimum or not.
		return mid+1;
	if(mid>low && arr[mid-1]>arr[mid])//checking mid itself minimum.
		return mid;
	if (arr[high] > arr[mid])
       return countRotations(arr, low, mid-1);//checking left half.
    return countRotations(arr, mid+1, high);//checking right half.
}
int main(){
	int arr[]= {15,28,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<countRotations(arr,0,n-1);
	return 0;
}
