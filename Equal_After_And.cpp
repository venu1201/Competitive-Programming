#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);

		heapify(arr, n, largest);
	}
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
	
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i >= 0; i--) {
		// Move current root to end
		swap(arr[0], arr[i]);
		
		heapify(arr, i, 0);
	}
}
int main()
{
    int n;
    cout<<"enter total number of elements in array ";
    cin>>n;
    int arr[n];
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	

	heapSort(arr, n);

	cout << "Sorted array is \n";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}