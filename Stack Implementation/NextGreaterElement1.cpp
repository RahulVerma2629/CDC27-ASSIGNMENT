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


// Another Solution 
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size(); 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(nums1[i] == nums2[j]){
                    for(int k=j; k<m; k++){
                        if(nums2[k] > nums2[j]){
                            ans.push_back(nums2[k]);
                            break;
                        }
                        if(nums2[k] <= nums2[j] && k==m-1) ans.push_back(-1); 
                    }
                    break;
                }
            }
        }
        return ans;
    }
};
