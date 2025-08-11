class Solution {
  public:
    int getLPSLength(string &s) {
        //vector to store LPS 
        vector<int> lps(s.size(),0);
        int pre=0,suf=1;
        
        //start traversing untill suf exists
        while(suf < s.size()){
            //agar dono char equal hain to length 1 ho jayegi
            if(s[pre] == s[suf]){
                lps[suf] = pre+1;
                pre++;
                suf++;
            }
            else{ //agar dono char equal nahi hain
            //aur pre 0 par hai.. to lps 0 hogi
                if(pre == 0){
                    lps[suf] = 0;
                    suf++;
                }
                else{ //agar pre 0 pe nahi hai to 
                //pre ko uske peeche wali common lps me point kara denge
                    pre = lps[pre-1];
                }
            }
        }
        
        //sabse last wali hi longest ps hogi
        return lps[s.size()-1];
        
        
    }
};