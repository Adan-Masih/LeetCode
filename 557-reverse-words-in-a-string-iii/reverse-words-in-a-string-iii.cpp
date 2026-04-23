class Solution {
public:
    void reverse(string &s, int i,int j){
        while(i<j){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }

    }
    string reverseWords(string s) {
       int i = 0;
       int j = 0;
       int len = s.length();
       while(j<len)
       {
        if(s[j]==' ')
        {
            reverse(s,i,j-1);
            i=j+1;
        }
        j++;
       }
       reverse(s,i,len-1);
       return s;

        
    }
};