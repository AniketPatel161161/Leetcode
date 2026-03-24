class Solution {
public:
    int minPartitions(string n) {
        vector<int> arr;
        for(int i=0 ; i<n.length() ; i++){
            arr.push_back(n[i]-'0');
        }
        sort(arr.begin() , arr.end());
        return arr.back();
    }
};