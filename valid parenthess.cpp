class Solution {
public:
    bool isValid(string s) {

         unordered_map<int,int> m={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
        stack<int> st;
        
        for(auto &bracket:s){
            if(m[bracket]<0) st.push(bracket);
            else{
                if(st.size()==0) return false;
                char top=st.top();
                st.pop();
                if(m[bracket]+m[top]!=0) return false;
            }
        }
        if(st.size()==0) return true;
        return false;
        
    }
};
