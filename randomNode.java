/*class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        char[] c=ransomNote.toCharArray();
       char[] d=magazine.toCharArray();


        Map<Character,Integer> cp=new HashMap<>();

    for(char x:c){
        cp.put(x,cp.getOrDefault(x,0)+1);
    }
   for(Map.Entry<Character,Integer> entry:cp.entrySet()){
    System.out.println(entry.getKey()+" "+entry.getValue());
   }


  Map<Character,Integer> dp=new HashMap<>();

    for(char x:d){
        dp.put(x,dp.getOrDefault(x,0)+1);
    }
   for(Map.Entry<Character,Integer> entry:dp.entrySet()){
    System.out.println(entry.getKey()+" "+entry.getValue());
   }
   for(Map.Entry<Character,Integer> entry:cp.entrySet()){


Integer dv=dp.get(entry.getKey());


    if(dv==null || entry.getValue() > dv){
        return false;
    }
    System.out.println(entry.getKey()+" "+entry.getValue());
   }


   return true;
        
    }
}
*/



import java.util.HashMap;
import java.util.Map;

class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
 
        Map<Character, Integer> magazineMap = new HashMap<>();

        for (char ch : magazine.toCharArray()) {
            magazineMap.put(ch, magazineMap.getOrDefault(ch, 0) + 1);
        }

        for (char ch : ransomNote.toCharArray()) {
          
            if (!magazineMap.containsKey(ch) || magazineMap.get(ch) == 0) {
                return false;
            }
       
            magazineMap.put(ch, magazineMap.get(ch) - 1);
        }

        return true;
    }
}
