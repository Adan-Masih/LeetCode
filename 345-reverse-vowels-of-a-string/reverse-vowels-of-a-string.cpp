class Solution {
public:
    bool isVovle(char ch)
    {
        if((ch=='A'||ch=='I')||(ch=='O'||ch=='E')||
          (ch=='U'||ch=='a')||(ch=='e'||ch=='i')||
          (ch=='o'||ch=='u')){
            return true;
          }
          return false;
    }

    string reverseVowels(string s) 
    {
        int i =0;
        int j = s.length()-1;
        char temp;
        while(i<j)
        {
            if(isVovle(s[i]) && isVovle(s[j]))
            {
                temp=s[i];
                s[i]=s[j];
                s[j]= temp;
                i++;
                j--;
            }
            else if(!isVovle(s[i]))
            {
               i++;
            }
            else
            {
                j--;
            }
            
        }
        return s;
    }
};