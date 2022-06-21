// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to place first N natural
// numbers in an array such that none
// of the values are equal to its indices
void generatepermutation(int N)
{

// Stores the required array
	vector<int> answer;

	// Place N at the first position
	answer.push_back(N);

	// Iterate the range [1, N)
	for (int i = 1; i < N; i++)
	{
		// Append elements to the sequence
		answer.push_back(i);
	}

	// Print the sequence
	for(int i:answer) cout << i << " ";

}

// Driver Code
int main()
{
int N = 4;
generatepermutation(N);

return 0;
}

// This code is contributed by mohit kumar 29.
