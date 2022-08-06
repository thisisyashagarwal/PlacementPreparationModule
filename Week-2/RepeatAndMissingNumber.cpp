vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int>arr = A;
    sort( arr.begin(), arr.end());
    int n = arr.size();
    vector<int>v(2,-1);
    long long int i,sum = 0;
    for( i=0; i<n-1; i++)
    {
        sum += arr[i];
        if( arr[i] == arr[i+1])
            v[0] = arr[i];
    }
    sum += arr[i];
    long long int s = (n * (n+1) / 2);
    sum -= v[0];
    s = s - sum;
    v[1] = s;
    return v;
}
