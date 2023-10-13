class Solution {
public:
    int countBinarySubstrings(string s) {

        int p=1, q=0,l=0;

        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                p++;
            }
            else{
                l+=min(p,q);
                q=p;
                p=1;

            }

        }
        return l+=min(p,q);
        
        
    }
};
