class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        vector<int> v(128,-1);
        int ans=INT_MIN,l=0;
        for(int i=0;i<s.size();i++) {
            if(v[s[i]]>=l) {
                l=v[s[i]]+1;
            }
            v[s[i]]=i;
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};
