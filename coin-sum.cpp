int coinChange(vector<int>& coins, int amount) {
        if(amount <0) return -1;
        if(amount == 0) return 0;
        vector<int>mcdp(amount+1,INT_MAX);
        mcdp[0]=0;
        for(int i=1;i<=amount;i++){
            for(int coin : coins){
                if((coin<=i) && (mcdp[i-coin] != INT_MAX)){
                    mcdp[i]=min(mcdp[i],1+mcdp[i-coin]);
                }
            }
        }
        if(mcdp[amount] == INT_MAX){
            return -1;
        }
        return mcdp[amount];
    }
