class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        int n = a.size();
        int i,j;
        sort(a.begin(), a.end());
        for( i=1; i<n; i++)
        {
            int p = a[i][0];
            int q = a[i-1][1];
            if( p <= q)
            {
                a[i-1][1] = max(a[i-1][1], a[i][1]);
                a[i][0] = a[i-1][0];
                a[i][1] = a[i-1][1];
            }
        }
        sort(a.begin(), a.end());
        vector<vector<int>>v;
        v.push_back(a[n-1]);
         for( i = n-2; i >= 0; i--)
        {
            if( a[i+1][0] != a[i][0])
                v.push_back(a[i]);
        }
        sort(v.begin(), v.end());
        return v;
    }
};
