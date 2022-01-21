class Solution {
public:
    vector<vector<int>> ans;
    vector<int> cur;
    int sum;
    vector<vector<int>> combinationSum(vector<int>& candidates, int t) {
        
            sum = 0; 
            combination(candidates, t, 0);
        
            return ans;
    }
    
    void combination(vector<int>& candidates, int t, int index){
    
        if(sum > t) return;
        if(sum == t) ans.push_back(cur);
        
        for(int i = index; i < candidates.size(); i++){
            
            sum += candidates[i];
            cur.push_back(candidates[i]);
            
            combination(candidates, t, i);
            
            sum -= candidates[i];
            cur.pop_back();
        }      
    }
};
