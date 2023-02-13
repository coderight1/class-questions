class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res; // creating a vector to return the resultant vector.
        unordered_set<int> s1,s2; // creating two set to store only unique elements of vecotrs
        for(auto itr: nums1){
            s1.insert(itr); // storing all unique elements of nums1 to set s1;
        }
        for(auto itr: nums2){
            s2.insert(itr); // storing all unique elements of nums1 to set s2;
        }
        for(auto itr: s1){ // iterating through the set s1
            if(s2.find(itr)!=s2.end()){ // checking if elemnts of s1 is present in s2 till all         the elements of s2 persists.
                res.push_back(itr); // pushing all the intersection elements into resultant vector.
            }
        }
        return res;
    }
};