class Solution {
public:

    // Encodes a URL to a shortened URL.
     int code_val = 200;
    unordered_map<string, string> mp; 
    string encode(string longUrl) {
        string str = "http://tinyurl.com" + to_string(code_val);
        mp[str] = longUrl;
        code_val++;
        return str;
        // string str = longUrl;
        // int i;
        // for(i = 0; i < str.length(); i++)
        // {
        //     if(str[i] == 'm' && str[i+1] == '/')
        //     {
        //         i++;
        //         break;
        //     }
        // }
        // string domain = str.substr(0,i);
        // string tiny = str.substr(i+1, str.length());
        // hash<string> h;
        // h(tiny);
        // // domain += ntiny;
        // return domain; 
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {

       return mp[shortUrl]; 
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
