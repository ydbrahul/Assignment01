#include<bits/stdc++.h>
using namespace std;
//CASE 1: IF GIVEN ARRAY IS SORTED THEN TIME COMPLEXITY WILL BE O(N):
/*vector<int> solve(int *nums,int target,int arrSize){
    vector<int> ans;
    int i=0;
    int j=1;
    
    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum==target) {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        else if(sum>target) j--;
        else i++;
    }
    return ans;
}*/

//CASE 2: IF ARRAY IS NOT SORTED THEN TIME COMPLEXITY WILL BE O(N*N):
vector<int> solve(int* nums,int target, int arrSize){
    vector<int> ans;
    for(int i=0;i<arrSize-1;i++){
        for(int j=i+1;j<arrSize;j++){
            int sum=nums[i]+nums[j];
            if(sum==target) {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
            
        }
        if(!ans.empty()) break;
    }
    return ans;
}

int main(){
    int nums[]={2,7,11,15};
    int arrSize=4;
    int target=9;
     
    
   vector<int> ans=solve(nums,target,arrSize);
   for(auto x: ans) cout<<x<<" ";
   return 0;
}