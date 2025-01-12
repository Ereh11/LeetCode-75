class Solution {
public:
    bool isVowel(char c){
        char arr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(int i = 0; i < 10; i++)
        {
            if(c == arr[i])
                return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int st = 0, end = s.size() - 1;
        while(st < end)
        {
            if(isVowel(s[st]) && isVowel(s[end]))
            {
                swap(s[st], s[end]);
                st++, end--;
            }
            if(!isVowel(s[st]))
                st++;
            if(!isVowel(s[end]))
                end--;
        }
        return s;
    }
};