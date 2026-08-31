class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      
        unordered_set<int>st;
        //k size window
        for(int i=0;i<nums.size();i++){
            
            //window--->k
            if(i>k){
                st.erase(nums[i-k-1]);
            }
            if(st.count(nums[i])){
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
    }
};