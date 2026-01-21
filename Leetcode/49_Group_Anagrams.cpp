// Brute Force



// Better Solution
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        string s;
        for(int i = 0; i < strs.size(); i++){
            s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
       vector<vector<string>> vv;
        for(auto x: mp){
        	vector<string> temp;
            for(auto z: x.second){
                temp.push_back(z);
            }
            vv.push_back(temp);
        }
        return vv;
    }
};

// Optimal Solution

