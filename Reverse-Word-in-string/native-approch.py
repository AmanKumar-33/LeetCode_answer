# Given an input string s, reverse the order of the words.

# A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

# Return a string of the words in reverse order concatenated by a single space.

# Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

class solution{
    
    public:
    string reverseWords(string s) {
        string result = "";
        string word = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                if(word != ""){
                    result = word + " " + result;
                    word = "";
                }
            }
            else{
                word += s[i];
            }
        }
        if(word != ""){
            result = word + " " + result;
        }
        return result.substr(0, result.length()-1);
    }
}