class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>result(n);
        int maxright=-1;
        for(int i=n-1;i>=0;i--){
            int current=arr[i];
            result[i]=maxright;
            if(current>maxright){
                maxright=current;
            }
        }
        return result;
        
    }
};