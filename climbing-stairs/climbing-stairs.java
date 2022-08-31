class Solution {
    public int climbStairs(int n) {
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        int one=1, two=2;
        int curr=0;
        for(int i=3;i<=n;i++)
        {
            curr = one + two;
            one = two;
            two = curr;
        }
        return curr;
    }
}