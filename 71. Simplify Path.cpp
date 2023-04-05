class Solution {
public:
    string simplifyPath(string path) {
    vector<string> st;
    path += "/";
    string str = "";

    for(int i = 0; i < path.length(); i++)
    {
        if(path[i] == '/')
        {
            if(str == "..")
            {
                if(st.size() != 0)
                st.pop_back();
            }
            else if(str != "." && str != "")
            st.push_back(str);

            str = "";
        }
        else
            str += path[i];
    }
    // st.push("/");
    if(st.size() == 0)
    return "/";

    string ans = "";
    for(int i = 0; i < st.size(); i++)
    {
        ans += "/";
        ans += st[i];
        // st.pop();
    }
    return ans;
    }
};
