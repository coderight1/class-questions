// Easiest approach is using set .
// insert vectors elements into a set and again assign values to the vector
// again sort the nums vector bcz unordered_set don't returns in sorted order
// concept:-> set only stores unique elements
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        nums.assign(s.begin(),s.end());
        sort(nums.begin(),nums.end());
        return nums.size();
    }
};


// 2nd approach
// unsing two pointer
// explanation is code's comments

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        // Edge case :: No element is present in the array
        if(n==0)return 0;

        // using two pointer approach :: in which j is traversing the whole loop and i is         pointing to the unique elements only and then we make i =j and return i+1;
        int i=0,j=1;
        for(int j =1;j<n;j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};
