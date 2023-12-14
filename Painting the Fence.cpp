class Solution{
    public:
    long long countWays(int n, int k){
       long long mod=1000000007;
       if(n==0){
           return 0;
       }
       if(n==1){
           return k;
       }
       long long same=0;
       long long diff=k;
       for(long long i=2;i<=n;i++){
           long long prev=same;
           same=diff;
           diff=((prev+same)*(k-1))%mod;
           
       }
       return (same+diff)%mod;
    }
};
