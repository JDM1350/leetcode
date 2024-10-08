class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        vector<int> a;
     
int l=0,h=n.size()-1;
while(l<h){
    int s=n[l]+n[h];

    if(target==s){
        a.push_back(l+1);
        a.push_back(h+1);
        break;

    }
    else if(s<target){
        l++;
    }else{
        h--;
    }

}


return a;
        
    }
};
