class Solution {
    public int lengthOfLastWord(String s) {


        String m=s.trim();

        String[] n=m.split(" ");
        int z=0;

        for (String word : n) {
            // Iterate over each character in the word
            
            
                System.out.println(word.length());  // Print each character
            z=word.length();
        }
        return z;

    
        
    }
}
