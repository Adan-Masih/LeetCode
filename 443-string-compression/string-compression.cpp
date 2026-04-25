class Solution {
public:
    int compress(vector<char>& chars) {
         int n = chars.size();
         int i = 0;
         int k = 0;
         while(i<n){
            // current character 
            char current = chars[i];
            int count = 0;
            while(i<n && chars[i]==current){
                i++;
                count++;
            }
           // assigninig in place 
            chars[k++]=current;
            if(count>1){
                string cnt= to_string(count);
                for(char c:cnt){
                    chars[k++]=c;
                }
            }
         }
         return k;
    }
};