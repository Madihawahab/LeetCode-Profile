class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string, int> mp;

        for(auto &it : words){
            mp[it]++;
        }

        vector<pair<string, int>> temp;

        for(auto &it : mp){
            temp.push_back({it.first, it.second});
        }

        auto myComparator = [](pair<string, int> p1, pair<string, int> p2){
            if(p1.second == p2.second){
                return p1.first<p2.first;
            }
            return p1.second>p2.second;
        };

        sort(temp.begin(), temp.end(), myComparator);

        int i = 0;
        vector<string> result(k);

        while(i<k){
            result[i] = temp[i].first;
            i++;
        }

        return result;
    }
};