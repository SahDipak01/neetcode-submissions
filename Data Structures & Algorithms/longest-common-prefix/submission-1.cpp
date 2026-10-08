class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string result="";
        for(int i=0;i<strs[0].length();i++){
            for(int j=1;j<n;j++){
            if(i>=strs[j].length() || strs[j][i]!=strs[0][i]){
                return result;
            }
            }
            result+=strs[0][i];

        }
        return result;
        
    }
};