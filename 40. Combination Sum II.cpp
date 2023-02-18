class Solution {
    
// public:
//     void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
//     {
//         if(ind == arr.size())
//         {
//             if(target == 0)
//             {
//                 // sort(ds.begin(), ds.end());
//                 ans.push_back(ds);
//             }
//             return;
//         }
//         if(arr[ind] <= target){
//             ds.push_back(arr[ind]);
//             findCombination(ind+1, target-arr[ind], arr, ans, ds);
//             ds.pop_back();
//         }
//         findCombination(ind+1, target, arr, ans, ds);
//     }

void findCombination(int ind, int target, vector<int> candidates, vector<vector<int>> &ans, vector<int> ds)
{
    // if(ind == candidates.size())
    // {
        if(target == 0){
        ans.push_back(ds);
        return;
    }
    for(int i = ind; i < candidates.size(); i++)
    {
        if(i > ind && candidates[i] == candidates[i-1]) 
        continue;
        if(target < candidates[i])
        break;
        ds.push_back(candidates[i]);
        findCombination(i+1, target-candidates[i], candidates, ans, ds);
        ds.pop_back();
    }
}
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    // vector<vector<int>> ans;
    // sort(candidates.begin(), candidates.end());
    
    // vector<int> ds;
    // findCombination(0, target, candidates, ans, ds);
    // // sort(ans.begin(), ans.end());
    // // ans.erase(unique(ans.begin(), ans.end()), ans.end());
    // return ans;

    vector<int> ds;
    vector<vector<int>> ans;
    sort(candidates.begin(), candidates.end());
    findCombination(0, target, candidates, ans, ds);
    return ans;
    }
};
