class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& l) {
        //code here
        map<string , vector<string>> mp;
        string s;
        for(auto it : l)
        {
            s = it;
            sort(s.begin() , s.end());
            mp[s].push_back(it);
        }
        vector<vector<string>> ans;
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
