// Last updated: 6/9/2026, 9:12:58 PM
class Solution {
public:
    long long appealSum(string s) {
        long long n = s.size();
        long long sub_arr_count = (n*(n+1))/2;
        int freq[26] = {0};
        for(auto i:s){
            freq[i-'a']++;
        }
        long long temp_sub_arr_count = 0 ;
        for(int i=0;i<26;i++){
            
            int j=0;
            long long contri_cnt=0;
            while(j<n){
                if(s[j]==(char('a'+i))) j++;
                long long len = 0;

                while(j<n && s[j] != (char('a'+ i))) {
                    len++;
                    j++;
                }
                // cout<<char('a'+i)<<" "<<len<<" \n";
                contri_cnt += ((len*(len+1))/2);
            }
            temp_sub_arr_count += (sub_arr_count - contri_cnt);
        }
        
        return temp_sub_arr_count;
    }
};


// This is a problem of contribution technique

// we have to:

// 1- First find out all the sub-arrays O(n^2);

// 2- Then for each sub-array find out unique chars count.(appeal)

// 3- Sum up all the counts and then you have the answer.

// abbca
// a , b , b , c , a

// Q- How to find out count of sub-arrays which only has a
// Ans- count of all sub-arrays - count of sub-arrays containing non-a's.