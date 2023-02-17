// Input:
// N = 2
// arr[] = {2, 3}
// Output:
// 0 2 3 5
// Explanation:
// When no elements is taken then Sum = 0.
// When only 2 is taken then Sum = 2.
// When only 3 is taken then Sum = 3.
// When element 2 and 3 are taken then 
// Sum = 2+3 = 5.
// Solution: Recursive Solution where we are picking the element and not picking the element and if it reaches to the last index of vector then add sum to the vector


class Solution
{
    void subsets(int ind, int sum, int n, vector<int> arr, vector<int> &result)
{
	if(ind == n)
	{
		result.push_back(sum);
		return;
	}
    //pick the index 	
	subsets(ind+1, sum+arr[ind], n, arr, result);
    //not pick 	
	subsets(ind+1, sum, n, arr, result);

}
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
    vector<int> result;
	subsets(0, 0, arr.size(), arr, result);

	sort(result.begin(), result.end());
	return result;
    }
};

