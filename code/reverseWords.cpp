#include <vector>
#include <string>
#include <iostream>

using namespace std; 

class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> words;

        string utilityString;

        for(int i = 0; i<s.length(); i++) {
            if(s[i]!=' '){
                utilityString+=s[i];
            } 
            
            if(((s[i]==' ') | (i==s.length()-1) && utilityString.length()!=0)){
                words.push_back(utilityString);
                utilityString="";
            }


        }

        for (int j = words.size()-1; j >= 0; j--) {
            utilityString+=words[j];
            if(j!=0){
                utilityString+=' ';
            }
            }
        
        return utilityString;

    }
};

int main() {

    string s = " hello world ";

    Solution solution;

    cout << '|' << solution.reverseWords(s) << '|' << endl;


}