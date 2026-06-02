class Solution {
public:
    int lengthOfLIS(vector<int>&a) {
        int n=a.size();
        vector<int>l(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j]){
                    l[i]=max(l[i],l[j]+1);
                }
            }
        }
        int max_len=0;
        for(int v:l){
            if(max_len<v) max_len=v;
        }
        return max_len;
    }
};