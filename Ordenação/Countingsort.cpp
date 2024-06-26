// C++ Program for counting sort 
#include<bits/stdc++.h> 
#include<string.h> 
#include <cstdlib> // srand(),rand().
#include <time.h> //time(), clock().
using namespace std; 
#define RANGE 255 

// The main function that sort 
// the given string arr[] in 
// alphabatical order 
void countSort(char arr[]) 
{ 
	// The output character array 
	// that will have sorted arr 
	char output[strlen(arr)]; 

	// Create a count array to store count of inidividul 
	// characters and initialize count array as 0 
	int count[RANGE + 1], i; 
	memset(count, 0, sizeof(count)); 

	// Store count of each character 
	for(i = 0; arr[i]; ++i) 
		++count[arr[i]]; 

	// Change count[i] so that count[i] now contains actual 
	// position of this character in output array 
	for (i = 1; i <= RANGE; ++i) 
		count[i] += count[i-1]; 

	// Build the output character array 
	for (i = 0; arr[i]; ++i) 
	{ 
		output[count[arr[i]]-1] = arr[i]; 
		--count[arr[i]]; 
	} 

	/* 
	For Stable algorithm 
	for (i = sizeof(arr)-1; i>=0; --i) 
	{ 
		output[count[arr[i]]-1] = arr[i]; 
		--count[arr[i]]; 
	} 
	
	For Logic : See implementation 
	*/

	// Copy the output array to arr, so that arr now 
	// contains sorted characters 
	for (i = 0; arr[i]; ++i) 
		arr[i] = output[i]; 
} 

// Driver code 
int main() 

{ 
   
	int vetor [1000];
	int m = 1000;
	srand (time (NULL));
	
	for (int i =0; i<m; i++){
		vetor [i] = rand ()% 1000;
	}
	char arr[] = "geeksforgeeks"; 

	countSort(arr); 

	cout<< "Sorted character array is " << arr; 
	return 0; 
} 

// This code is contributed by rathbhupendra 

