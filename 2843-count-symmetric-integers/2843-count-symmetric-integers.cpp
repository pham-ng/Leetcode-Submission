class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        string s;
        int sum=0;
        for(int i=low;i<=high;i++){
            s=to_string(i);
            int n=s.size();
            if(n%2==0)
            {
                int countA=0;
                int countB=0;
                for(int j=0;j<n/2;j++){
                    countA+=s[j];
                }
                for(int k=n/2;k<n;k++){
                    countB+=s[k];
                }
                if(countA==countB){
                    sum++;
                }

            } 
        }
        return sum;
    }
};