class Solution {
    public boolean isAnagram(String s, String t) {


        HashMap<Character,Integer> mp=new HashMap<>();
        char[] s1=s.toCharArray();
        char[] s2=t.toCharArray();

        if(s1.length!=s2.length){
            return false;
        }

        for(char x:s1){
            mp.put(x,(mp.getOrDefault(x,0)+1));
        }
        for(char x:s2){
            if(!mp.containsKey(x) || mp.get(x)==0){
                return false;
            }
            mp.put(x,mp.get(x)-1);
        }
        return true;
        
    }
}
