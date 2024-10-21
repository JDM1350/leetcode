class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        

        int tg=0,tc=0,t=0,s=0;

        for(int i=0;i<gas.length;i++){
            tg+=gas[i];
            tc+=cost[i];
            t+=gas[i]-cost[i];
        if(t<0){
            s=i+1;
            t=0;
        }
        }

        if(tg<tc){
            return -1;
        }
        return s;
    }
}
