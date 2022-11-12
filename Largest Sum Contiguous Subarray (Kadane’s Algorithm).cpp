//Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.
//Example 1:
//Input:
//N = 5
//Arr[] = {1,2,3,-2,5}
//Output:
//9
//Explanation:
//Max subarray sum is 9
//of elements (1, 2, 3, -2, 5) which 
//is a contiguous subarray.
//Example 2:
//Input:
//N = 4
//Arr[] = {-1,-2,-3,-4}
//Output:
//-1
//Explanation:
//Max subarray sum is -1 
//of element (-1)
//Your Task:
//You don't need to read input or print anything. The task is to complete the function maxSubarraySum() which takes Arr[] and N as input parameters and returns the sum of subarray with maximum sum.
//Expected Time Complexity: O(N)
//Expected Auxiliary Space: O(1)
//Constraints:
//1 = N = 106
//-107 = A[i] = 107
#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
			long long maxSubarraySum(int a[],int n ) {
			long long max_ending_here=0;
			long long max_so_far=-999;
			for(int i=0;i<n;i++) {
				max_ending_here+=a[i];
				if(max_so_far<max_ending_here) max_so_far=max_ending_here;
				
			}
			return max_so_far;
		}
};
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		Solution obj;
		cout<<obj.maxSubarraySum(a,n);
		cout<<endl;
	}
}