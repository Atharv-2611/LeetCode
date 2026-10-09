class Solution {
public:
    int reverse(int x) {

        
        string x_str = to_string(x);

        int l;
        int r = x_str.size() - 1;

        if(x < 0) l = 1;
        else l = 0;

        while(l < r){
            swap(x_str[l], x_str[r]);
            l++;
            r--;
        }        

        long long num = stoll(x_str);
        int numi = (int)num;
        if( num > INT_MAX || num < INT_MIN) return 0;
        else return numi;
    }
};