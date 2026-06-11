void reverse(string& s,int i,int j) {
    while(j>=i) {
        swap(s[i],s[j]);
        i++;
        j--;
    }
}

class Solution {
public:
    string reverseWords(string s) {
        int l=0,i=0;
        for(i=0;i<s.size();i++) {
            if(s[i]==' ') {
                reverse(s,l,i-1);
                l=i+1;
            }
        }
        reverse(s,l,i-1);
        return s;
    }
};
