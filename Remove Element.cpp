// Two pointer approach solutioin 
// 1. Creating two pointer i and j 
// 2. Through j we are traversing the array
// 3. if array's value is not equal to val we are assigning to the nums[i]; 
// 4. And lastly returning the i; 

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i =0;
        for(int j =0;j<nums.size();j++){
            if(nums[j]!=val){
                nums[i]=nums[j];
                i++;
            }
        }
        
        return i;
    }
};