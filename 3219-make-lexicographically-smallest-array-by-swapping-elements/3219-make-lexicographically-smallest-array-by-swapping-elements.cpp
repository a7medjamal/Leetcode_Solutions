class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<pair<int, int>> idxofval;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            idxofval.push_back({nums[i], i});
        }
        sort(idxofval.begin(), idxofval.end());
        vector<vector<pair<int, int>>> groups;
        groups.push_back({idxofval[0]});
        for (int i = 1; i < n; ++i) {
            if (idxofval[i].first - idxofval[i - 1].first <= limit) {
                groups.back().push_back(idxofval[i]);
            } else {
                groups.push_back({idxofval[i]});
            }
        }
        for (auto& group : groups) {
            vector<int> idx;
            for (auto& [a, b] : group) {
                idx.push_back(b);
            }
            sort(idx.begin(), idx.end());
            for (int i = 0; i < idx.size(); ++i) {
                nums[idx[i]] = group[i].first;
            }
        }

        return nums;
    }
};