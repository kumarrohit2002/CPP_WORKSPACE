#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <unordered_set>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v; // no of vertices

void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

vector<int> bfs(int src) {
    vector<int> dist(v, -1); // Initializing distances to -1
    queue<int> qu;
    visited.clear();

    dist[src] = 0;
    visited.insert(src);
    qu.push(src);

    while (!qu.empty()) {
        int curr = qu.front();
        qu.pop();
        for (auto neighbour : graph[curr]) {
            if (!visited.count(neighbour)) {
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
    return dist;
}

int main() {
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }

    int x, y;
    cin >> x >> y;

    vector<int> dist = bfs(x);

    for (int i = 0; i < v; i++) {
        cout << dist[i] << " ";
    }

    return 0;
}

