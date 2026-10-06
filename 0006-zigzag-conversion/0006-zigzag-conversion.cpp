class Solution {
public:
    string convert(string s, int numRows) {
        char arr[numRows][s.size()]; 
        string ans="";
        int row = 0;
        int col = 0;
        bool go_down = false;

        if(numRows == 1){
            return s;
        }else{ 
        for(int i = 0; i < numRows; i++){
            for (int j =0; j< s.size();j++) arr[i][j] = '\0';
        }

        for (int i = 0; i < s.size(); i++){
            arr[row][col] = s[i];
            if(row == 0 || row == numRows -1) go_down = !go_down;
            col ++;
            if(go_down == true) row++;
            else row--; 
        }

        for(int i = 0; i < numRows; i++){
            for (int j =0; j< s.size();j++){
            if(arr[i][j] != '\0'){
                ans += arr[i][j];
            }
        }
        }
        return ans;
        }

    }
};