
#include <iostream>

using namespace std;



//selection[seçmeli sıralama]
//sizeof dizideki boyutu hesaplamak için önemlidir.


void PrintArray(int arr[], int size)
{

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}

void selectionsort(int arr[], int size)
{

	int minindis = 0;
	for (int i = 0; i <size-1; i++)
	{
		minindis = i;
		for (int j = i+1; j < size; j++)
		{
			if (arr[minindis]>arr[j])
			{
				minindis = j;
			}

		}
		if (minindis!=i)
		swap(arr[i], arr[minindis]);
		PrintArray(arr, size);
    }
}


int main()
{

	int arr[] = { 3, 5, 9, 7, 2, 8, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);

	PrintArray(arr, size);
	cout << endl;
	selectionsort(arr, size);
	cout << endl;
	PrintArray(arr, size);

	return  0;

}