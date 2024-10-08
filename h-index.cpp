class Solution {
public:
    int hIndex(vector<int>& c) {
        
 
        sort(c.begin(),c.end());

       for(int i=0;i<c.size();i++){
        if((c.size()-i)<=c[i]){
            return c.size()-i;
        }

       }
       return 0;

        
    }
};
