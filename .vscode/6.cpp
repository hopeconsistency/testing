// C++ implementation of simple method to
// find print pairs with given sum.
#include <bits/stdc++.h>
using namespace std;

// Returns number of pairs in arr[0..n-1]
// with sum equal to 'sum'
int printPairs(int arr[], int n, int sum)
{
	int count = 0; // Initialize result

	// Consider all possible pairs and check
	// their sums
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] + arr[j] == sum)
				cout << "(" << arr[i] << ", "
					<< arr[j] << ")" << endl;
}

// Driver function to test the above function
int main()
{
	int arr[] = { 1, 5, 7, -1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 6;
	printPairs(arr, n, sum);
	return 0;
}



// // C++ implementation of simple method to
// // find count of pairs with given sum.
// #include <bits/stdc++.h>
// using namespace std;

// // Returns number of pairs in arr[0..n-1]
// // with sum equal to 'sum'
// void printPairs(int arr[], int n, int sum)
// {
// 	// Store counts of all elements in map m
// 	unordered_map<int, int> m;

// 	// Traverse through all elements
// 	for (int i = 0; i < n; i++) {

// 		// Search if a pair can be formed with
// 		// arr[i].
// 		int rem = sum - arr[i];
// 		if (m.find(rem) != m.end()) {
// 			int count = m[rem];
// 			for (int j = 0; j < count; j++)
// 				cout << "(" << rem << ", "
// 					<< arr[i] << ")" << endl;
// 		}
// 		m[arr[i]]++;
// 	}
// }

// // Driver function to test the above function
// int main()
// {
// 	int arr[] = { 1, 5, 7, -1, 5 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	int sum = 6;
// 	printPairs(arr, n, sum);
// 	return 0;
// }


// // C++ code to implement
// // the above approach
// #include<bits/stdc++.h>
// using namespace std;

// void pairedElements(int arr[],
// 					int sum, int n)
// {
// int low = 0;
// int high = n - 1;

// while (low < high)
// {
// 	if (arr[low] + arr[high] == sum)
// 	{
// 	cout << "The pair is : (" <<
// 			arr[low] << ", " <<
// 			arr[high] << ")" << endl;
// 	}
// 	if (arr[low] + arr[high] > sum)
// 	{
// 	high--;
// 	}
// 	else
// 	{
// 	low++;
// 	}
// }
// }

// // Driver code
// int main()
// {
// int arr[] = {2, 3, 4, -2,
// 			6, 8, 9, 11};
// int n = sizeof(arr) / sizeof(arr[0]);
// sort(arr, arr + n);
// pairedElements(arr, 6, n);
// }

// // This code is contributed by Rajput-Ji
