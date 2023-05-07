#include<vector>
#pragma once

class Solution
{
public:
	static void qsort(std::vector<int>& arr)
	{
		sorted(arr, 0, arr.size() - 1);
	}

	static void sorted(std::vector<int>& arrs, int startposition, int endPosition)
	{
		int leftPosition = startposition;
		int rightPosition = endPosition;

		int pivot = arrs[(rightPosition + leftPosition) / 2];

		do
		{
			while (arrs[leftPosition] < pivot) {
				leftPosition++;
			}

			while (arrs[rightPosition] > pivot) {
				rightPosition--;
			}

			if (leftPosition <= rightPosition)
			{
				if (leftPosition < rightPosition)
				{
					int temp = arrs[leftPosition];
					arrs[leftPosition] = arrs[rightPosition];
					arrs[rightPosition] = temp;
				}
				leftPosition++;
				rightPosition--;
			}
		} while (leftPosition <= rightPosition);


		if (leftPosition < endPosition)
			sorted(arrs, leftPosition, endPosition);

		if (startposition < rightPosition)
			sorted(arrs, startposition, rightPosition);
	}
	
	void merge(std::vector<int>& num1, int m, std::vector<int>& num2, int n)
	{
		for (int i = 0, j = m; i < n; i++)
		{
			num1[j] = num2[i];
			j++;
		}
		qsort(num1);
	}
};
