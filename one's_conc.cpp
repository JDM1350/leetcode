class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
int i=0,j=0;
while(j<nums.size()){              //i=0,j=0  j=11 k=-1 i=5 
    if(nums[j]==0){
        k--;
    }
    if(k<0){
        if(nums[i]==0){
            k++;
        }
        i++;
    }
    j++;

}
cout<<j<<" "<<i;

///i=0 j=0 
return j-i;
        
    }
};
