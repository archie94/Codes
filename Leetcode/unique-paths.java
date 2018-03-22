// https://leetcode.com/problems/unique-paths/description/

class Solution {
    
    int dp[][];
    
    public int uniquePaths(int m, int n) {
        dp = new int[m][n];
        
        for (int i = 0; i < m; i++) 
            for (int j = 0; j < n; j++) 
                dp[i][j] = -1;
        
        return path(0, 0, m, n);
    }
    
    private int path(int a, int b, int m, int n) {
        if (a == m-1 && b == n-1) return 1;
        
        if (a >= m) return 0;
        if (b >= n) return 0;
        
        if (dp[a][b] != -1) return dp[a][b];
        
        dp[a][b] = path(a+1, b, m, n) + path(a, b+1, m, n);
        return dp[a][b];
    }
}