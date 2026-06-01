class Solution {
public://using memoisation
    int climbStairsHelper(int n, vector<int>& memo) {
        if (n == 0 || n == 1) return 1;

        if (memo[n] != -1) return memo[n];

        return memo[n] = climbStairsHelper(n-1, memo) + climbStairsHelper(n-2, memo);
    }

    int climbStairs(int n) {
        vector<int> memo(n+1, -1);
        return climbStairsHelper(n, memo);
    }
};