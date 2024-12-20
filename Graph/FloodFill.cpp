#include <vector>
#include <iostream>
#include <map>
#include <queue>
using namespace std;

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    int cur = image[sr][sc];
    if (cur == color) return image;

    int n = image.size();
    int m = image[0].size();
    queue<pair<int, int>> q;
    q.push({sr, sc});
    image[sr][sc] = color;

    vector<pair<int, int>> directions = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for (const auto &direction : directions)
        {
            int dr = direction.first;  // Get the row offset
            int dc = direction.second; // Get the column offset

            int newr = row + dr;
            int newc = col + dc;

            if (newr >= 0 && newr < n && newc >= 0 && newc < m && image[newr][newc] == cur)
            {
                q.push({newr, newc});
                image[newr][newc] = color;
            }
        }
    }

    return image;
}
int main()
{
    return 0;
}