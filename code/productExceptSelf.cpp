#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> answer(n, 1);

        int prod = 1;
        for(int i = 1; i < nums.size(); i++) {
            prod*=nums[i-1];
            answer[i]*=prod;
        }

        prod = 1;
        for(int i = n-2; i >= 0; i--) {
            prod*=nums[i+1];
            answer[i]*=prod;
        }

        return answer;

    }
};

int main() {
    Solution solution;

    vector<int> nums;
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    solution.productExceptSelf(nums);

}