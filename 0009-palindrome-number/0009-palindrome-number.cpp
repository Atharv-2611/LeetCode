class Solution {
public:
    bool isPalindrome(int x) {

        string str = to_string(x);
        int l = 0;
        int r = str.size()-1;

        if(x < 0){
            return false;
        }else{
            for(int i  ; i < (str.size()/2); i++){
            if(l < r){
                swap(str[l], str[r]);
                l++;
                r--;
            }
            }
            

            long long ans = stoll(str);

            if(x == ans) return true;
            else return false;
            }
        
    }
};