class Solution {
public:
    bool isAnagram(string s, string t) {

        //Brute force approach
        //time complexity : O(nlogn)
        //space complexity : O(1)

        int n =  s.size();
        int m = t.size();

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

       return s == t;

    }
};