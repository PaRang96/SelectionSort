#include <iostream>
#include <vector>
using namespace std;

void selectionsort(vector<int>& inputvector)
{
	for (size_t i = 0; i < inputvector.size() - 1; i++)
	{
		int temp = i;
		for (size_t j = i + 1; j < inputvector.size(); j++)
		{
			if (inputvector[temp] > inputvector[j])
			{
				temp = j;
			}
		}
		swap(inputvector[i], inputvector[temp]);
	}
}

int main()
{
	vector<int> SortVector;
	SortVector = { 1, 5, 9, 2, 7 };

	selectionsort(SortVector);

	for (int i = 0; i < SortVector.size(); i++)
	{
		cout << SortVector[i] << ' ';
	}

	return 0;
}