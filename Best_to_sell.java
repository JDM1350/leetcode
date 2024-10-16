class Solution {
    public int maxProfit(int[] a) {

        int max1=a[0];
        int p=0;
        for(int i=0;i<a.length;i++){
   int d=a[i]-max1;
   p=Math.max(d,p);

   max1=Math.min(max1,a[i]);

        }

   
 return p;
    }
}
