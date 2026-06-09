// Last updated: 6/9/2026, 9:12:53 PM
class ATM {
public:
     vector<int> a={20,50,100,200,500};
    vector<long long int> cnt;
    ATM() :cnt(5) {
       
    }
    
    void deposit(vector<int> a) {
        for(int i=0;i<5;i++){
            cnt[i]+=a[i];
        }
    }
    
    vector<int> withdraw(int amount) {
        vector<int> b(5);
        for(int i=4;i>=0;i--){
            b[i]=min<long long>(amount/a[i],cnt[i]);
            amount-=a[i]*b[i];
        }
        if(amount>0) return {-1};
        for(int i=0;i<5;i++){
            cnt[i]-=b[i];
        }
        return b;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */