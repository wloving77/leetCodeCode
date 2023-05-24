#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int flowerCount = n;

        for(int i = 0; i < flowerbed.size(); i++) {
            int lowerIndex = 0 > i-1 ? 0 : i-1;
            int upperIndex = flowerbed.size()-1 < i+1 ? flowerbed.size()-1 : i+1;
        
            int emptyBool = flowerbed[i] + flowerbed[lowerIndex] 
            + flowerbed[upperIndex];


            if(emptyBool == 0){
                flowerbed[i] = 1;
                flowerCount--;
            } 
            
            if(flowerCount==0){
                return true;
            }

        }
        
        return false; 

    }
};

int main(){
    Solution solution;

    // Example usage
    vector<int> flowerbed;
    flowerbed.push_back(1);
    flowerbed.push_back(0);
    flowerbed.push_back(0);
    flowerbed.push_back(0);
    flowerbed.push_back(1);
    flowerbed.push_back(0);
    flowerbed.push_back(0);
    int n = 2;
    
    bool canPlace = solution.canPlaceFlowers(flowerbed, n);
    
    cout << "Can place flowers: " << (canPlace ? "Yes" : "No") << endl;

    return 0;
}