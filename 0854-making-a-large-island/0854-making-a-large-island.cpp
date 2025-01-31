class Solution {
 public:
  int largestIsland(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<int> islandSizes = {0, 0};
    int maxIslandSize = 0;
    
    int islandId = 2;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (grid[i][j]) {
          islandSizes.push_back(dfs(grid, i, j, islandId));
          maxIslandSize = max(maxIslandSize, islandSizes.back());
          islandId++;
        }
      }
    }

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (!grid[i][j]) {
          unordered_set<int> neighborIds = {
              isValid(grid, i + 1, j),
              isValid(grid, i - 1, j),
              isValid(grid, i, j + 1),
              isValid(grid, i, j - 1)};
          
          int possibleSize = 1;
          for (int id : neighborIds)
            possibleSize += islandSizes[id];

          maxIslandSize = max(maxIslandSize, possibleSize);
        }
      }
    }

    return (maxIslandSize == 0 ? n * n : maxIslandSize);
  }

  int dfs(vector<vector<int>>& grid, int i, int j, int id) {
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != 1)
      return 0;
    
    grid[i][j] = id;
    return 1 + (dfs(grid, i + 1, j, id) +
               dfs(grid, i - 1, j, id) +
               dfs(grid, i, j + 1, id) +
               dfs(grid, i, j - 1, id));
  }

  int isValid(const vector<vector<int>>& grid, int i, int j) {
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()) return 0;
    return grid[i][j];
  }
};
