#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        

        int n = chars.size();

        int letterCount = 1;
        int index = 0;

        for(int i = 1; i <= n; i++) { 
            
            if(i < n && chars[i] == chars[i-1]) {
                letterCount++;
            } else {
                chars[index++] = chars[i-1];

                if(letterCount > 1) {
                    string numLettersAsString = to_string(letterCount);
                    for (int j = 0; j < numLettersAsString.length(); j++) {
                        chars[index++] = numLettersAsString[j];
                    }

                }
                
                letterCount = 1; 

            }

        }

        chars.resize(index);
        return chars.size();

    }
};

int main() {

    Solution solution;

    vector<char> string;

    for(int i = 0; i < 4; i++){
        string.push_back('a');
    }

    for(int i = 0; i < 6; i++) {
        string.push_back('b');
    }

    cout << string.size() << endl;

    cout << solution.compress(string) << endl;

    for(int i = 0; i < string.size(); i++) {
        cout << string[i] << endl;
    }


}