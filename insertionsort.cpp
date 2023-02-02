#include <bits/stdc++.h> 
using namespace std;
void insertionSort(int n, vector<int> &arr){
    // Write your code here.

    for(int i = 0; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i-1;
        // cout<<j<<endl;
        for(; j >= 0; j--)
        {
            if(temp < arr[j])
            arr[j+1] = arr[j];
            else
            break;
        }
        arr[j+1] = temp;
    }
}
