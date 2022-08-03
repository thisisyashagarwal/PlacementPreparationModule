class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx1, idx2;
        for( int i=0; i<n; i++)
        {
            if( nums[i] > nums[i+1])
            {
                idx1 = i;
                break;
            }
        } 
        for( int i=n-1; i>=n; i--)
        {
            if( nums[i] < nums[i-1])
            {
                idx2 = i-1;
                break;
            }
        }
        swap( nums[idx1], nums[idx2]);
        reverse( nums.begin(), nums.end());
        
    }
};
