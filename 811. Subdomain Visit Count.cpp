class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
    unordered_map<string, int> mp;
    vector<string> ans;
    for(int i = 0; i < cpdomains.size(); i++)
    {
        string str = cpdomains[i];
        string newstr = "";
        int sm = 0;
        for(int j = 0; j < str.length(); j++)
        {
            if(str[j] != ' ' && str[j] != '.')
            {
                newstr += str[j];
            }
            else if(str[j] == ' ')
            {
                sm = stoi(newstr);
                string s = str.substr(j+1, str.length()-1);
                if(mp.find(s) != mp.end())
                {
                    mp[s] += sm;
                }
                else
                {
                    mp[s] = sm;
                }
                newstr = "";
            }
            else if(str[j] == '.')
            {
                // sm = stoi(newstr);
                string s = str.substr(j+1, str.length()-1);
                if(mp.find(s) != mp.end())
                {
                    mp[s] += sm;
                }
                else
                {
                    mp[s] = sm;
                }
            }
        }
    }   
    // cout<<mp.size();
    for(auto x: mp)
    {
        string domains = "";
        domains += ""+to_string(x.second);
        domains += " ";
        domains += x.first;
        ans.push_back(domains);
    }

    // for(int i = 0; i < ans.size(); i++)
    // cout<<ans[i]<<" ";

    return ans;
    }
};
