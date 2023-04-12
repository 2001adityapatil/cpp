    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        // set<int> st;
        // for(int i = 0; i < n; i++)
        // st.insert(arr1[i]);
        
        // for(int i = 0; i < m; i++)
        // st.insert(arr2[i]);
        
        // vector<int> ans;
        // for(auto x: st)
        // {
        //     ans.push_back(x);
        // }
        // return ans;
        int i = 0, j = 0;
        vector<int> ans;
        while(i < n && j < m)
        {
            if(arr1[i] <= arr2[j])
            {
                if(ans.size() == 0 || arr1[i] != ans.back())
                ans.push_back(arr1[i]);
                
                i++;
            }
            else
            {
                if(ans.size() == 0 || arr2[j] != ans.back())
                ans.push_back(arr2[j]);
                
                j++;
            }
        }
        
        while(i < n)
        {
            if(arr1[i] != ans.back())
            ans.push_back(arr1[i]);
                
            i++;
        }
        while(j < m)
        {
            if(arr2[j] != ans.back())
                ans.push_back(arr2[j]);
                
            j++;
        }
        return ans;
    // }
    }
