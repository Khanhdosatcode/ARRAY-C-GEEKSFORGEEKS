//////////////////////FIND THEMISSING NUMBER IN ARRAY
//Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.
//Example 1:
//Input:
//N = 5
//A[] = {1,2,3,5}
//Output: 4
//Example 2:
//Input:
//N = 10
//A[] = {6,1,2,8,3,4,7,10,5}
//Output: 9
//Your Task :
//You don't need to read input or print anything. Complete the function MissingNumber() that takes array and N as input  parameters and returns the value of the missing number.
//Expected Time Complexity: O(N)
//Expected Auxiliary Space: O(1)
//Constraints:
//1 = N = 106
//1 = A[i] = 106
/*/* ****** Huong dan giai*********
Tinh tong tu cua cap so song tu 1 den N 
sum=(N-1)*N/2
Lay tong tru di cac phan tu trong mang A[]
sum-=A[i];
Gia tri tong cuoi cung la phan tu con thieu*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	int Missingnumberinarray(int a[],int N) {
		int sum= N*(N+1)/2;
		for(int i=0 ;i<N-1;i++ ){
			sum-=a[i];
		}
		return sum;
	}
};
int main() {
	int t;
	cin >> t;
	while (t--) {
		int N;
		cin >> N;
		int a[N];
		for(int i=0;i<N-1;i++) cin >> a[i];
		Solution obj;
		cout<<obj.Missingnumberinarray(a,N);
		cout<< endl;
	}
}
