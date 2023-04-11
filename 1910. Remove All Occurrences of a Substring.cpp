class Solution {
public:
    string removeOccurrences(string s, string part) {
    int n = part.length();
 		int i = s.find(part);
		while(i >= 0)
 		{
 			// for(int j = 0; j < n; j++)
 			s.erase(i,n);	
 		
 			i = s.find(part);
		}  
    
		return s; 
    }
};
