#include<vector>
#pragma once

class Solution
{
public:
	void sorte(std::vector<int>& arr);
	void sorted(std::vector<int>& , int , int );

	void merge(std::vector<int>& num1, int m, std::vector<int>& num2, int n)
	{
		for (int i = 0, j = m; i < n; i++)
		{
			num1[j] = num2[i];
		}
		sorte(num1);

	}
};
void Solution::sorte(std::vector<int>& arr)
{
	sorted(arr, 0, arr.size() - 1);
}
void Solution::sorted(std::vector<int>& arrs, int startposition, int endPosition)
{
	int leftPosition = startposition;
	int rightPosition = endPosition;
	int pivot = arrs[(leftPosition + (rightPosition - leftPosition)) / 2];

	do
	{
		while (arrs[leftPosition] < pivot)
			leftPosition++;
		while (arrs[rightPosition] > pivot)
			rightPosition--;

		if (arrs[leftPosition] <= arrs[rightPosition])
		{
			int temp = arrs[leftPosition];
			arrs[leftPosition] = arrs[rightPosition];
			arrs[rightPosition] = temp;

			leftPosition++;
			rightPosition--;


		}
	} while (leftPosition<= rightPosition);


	if (leftPosition < endPosition)
		sorted(arrs, leftPosition, endPosition);
	if (startposition < rightPosition)
		sorted(arrs, startposition, rightPosition);

	


}
