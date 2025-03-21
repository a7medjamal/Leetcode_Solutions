class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
         unordered_set<string> available(supplies.begin(), supplies.end());
    unordered_map<string, vector<string>> g;
    unordered_map<string, int> indegree;
    queue<string> q;
    for (int i = 0; i < recipes.size(); i++) {
        indegree[recipes[i]] = ingredients[i].size();
        for (const string& ing : ingredients[i]) {
            g[ing].push_back(recipes[i]);
        }
    }
    for (string& supply : supplies) {
        q.push(supply);
    }
    vector<string> result;
    while (!q.empty()) {
        string item = q.front();
        q.pop();
        if (indegree.count(item)) {
            result.push_back(item);
        }
        for (string& next : g[item]) {
            if (--indegree[next] == 0) {
                q.push(next);
            }
        }
    }
    return result;

    }
};