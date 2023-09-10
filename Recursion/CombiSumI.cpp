
    void findComb(vector <int> &ds,vector<vector<int>> &ans,int index,int target,int &arr)
    {
        if(index==arr.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(arr[index]<target)
        {
            ds.push_back(arr[index]);
            findComb(ds,ans,index,target-arr[index],arr);
            ds.pop_back();
        }
        findComb(ds,ans,index+1,target,arr);
        
        
        
        
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector <vector<<int>> ans;
        vector <int> ds;
        int ind=0;
        findComb(ds,ans,ind,B,A);
        return ans;
        
        
    }
