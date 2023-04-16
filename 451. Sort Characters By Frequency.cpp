class Solution {
public:
    string frequencySort(string s) {
    vector<pair<int,char>> hash('z'+1,{0,0});
        for(char c: s)
            hash[c] = {hash[c].first+1,c};

        sort(hash.begin(),hash.end());
        
        string res ="";
        for(auto p: hash)
            res = string(p.first,p.second) + res;
        return res;

   

    // set<pair<int, char>> v;
	// unordered_map<int, int> mp;
	// for(int i = 0; i < s.length(); i++)
	// {
	// 	int ch = s[i];
	// 	mp[ch]++;
	// }
	// for(auto x: mp)
	// {
	// 	v.insert({x.second, char(x.first)});
	// }
	// string newstr = "";
	// for(auto x: v)
	// {
	// 	for(int i = 0; i < x.first; i++)
	// 	newstr = x.second + newstr;
	// }

    // return newstr;
    }
};
