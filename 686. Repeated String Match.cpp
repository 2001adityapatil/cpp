class Solution {
public:
    int repeatedStringMatch(string a, string b) {
    
    int count = 1;
    string tmp = a;
    while(a.size() < b.size())
    {
        count++;
        a += tmp;
    } 
    if(a.find(b) != -1)
    return count;

    a += tmp;
    count++;   

    if(a.find(b) != -1)
    return count;
    // cout<<a.size();
    return -1;
    }
};
