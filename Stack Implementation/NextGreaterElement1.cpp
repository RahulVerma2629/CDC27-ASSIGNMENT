class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0;
        while(i<nums1.size()){
            int j = 0;
            while(j<nums2.size() && nums1[i]!=nums2[j]){
                j++;
            }
            int ele = -1;
            for(int k=j+1; k<nums2.size(); k++){
                if(nums2[k]>nums2[j]){
                    ele = nums2[k];
                    break;
                }
            }
            ans.push_back(ele);
            i++;
        }
        return ans;
    }
};
