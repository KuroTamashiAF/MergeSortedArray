#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;

static void show(vector<int>& ll)
{
	for (int k : ll)
	{
		cout << k << " ";
	}
}


int main()
{

	vector<int> nums1 = { 1, 2, 3, 0, 0, 0 };
	int m = 3;

	vector<int> nums2 = {2,5,6};
	int n = 3;
	
	Solution x;
	x.merge(nums1, m, nums2, n);
	show(nums1);
	


	return 0;
}