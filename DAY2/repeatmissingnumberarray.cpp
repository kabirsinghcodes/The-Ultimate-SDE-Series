#define ll long long
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    ll n = A.size();
    
    ll diff=0;
    for(ll i=0; i<n; i++)  diff+=(ll)(A[i]-(i+1)); // a-b
    
    ll sqDiff=0;
    for(ll i=0; i<n; i++)  sqDiff+=(ll)((ll)A[i]*(ll)A[i] - (i+1)*(i+1)); //I was forgetting to typecast here, so It gave alot of error :( 
    
    ll sum = sqDiff/diff; // a+b
    
    int a = (sum+diff)/2;
    int b = (sum-a);
    
    vector<int> v{a,b};
    return v;
}