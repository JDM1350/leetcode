class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int k=0;
        int m=0;

        for (int n :nums){
            if(k==0){
                m=n;
            }

            if(n==m){
                k++;

            }
            else{
                k--;
            }
        }

        return m;



        
    }
};
