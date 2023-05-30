#include<bits/stdc++.h>
using namespace std;

 vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int expectedSum=(n*(n+1))/2;
        sort(nums.begin(),nums.end());
        int actualSum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])  ans.push_back(nums[i]);
            else actualSum+=nums[i];
        }
        
        int diff=expectedSum-actualSum;
        ans.push_back(diff);
        return ans;
    }

int main(){

    vector<int> nums={1,1};

    vector<int> ans=findErrorNums( nums);

    cout<<ans[0]<<" "<<ans[1];

}