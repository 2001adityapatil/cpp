// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

class Solution {
public:
    bool isValid(string str) {
vector<char> ans = {};
	
	
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] == '[' || str[i] == '{' || str[i] == '(')
		ans.push_back(str[i]);
		else
		{
			if(ans.size() == 0)
			return false;
			else
			{
				if(str[i] == ']' && ans[ans.size()-1] == '[') 
				ans.pop_back();
				else if(str[i] == ')' && ans[ans.size()-1] == '(')
				ans.pop_back();
				else if(str[i] == '}' && ans[ans.size()-1] == '{')
				ans.pop_back();
				else
				return false;
			}
		}	
	}

	if(ans.size() == 0)
	return true;

	return false;
    }
};
