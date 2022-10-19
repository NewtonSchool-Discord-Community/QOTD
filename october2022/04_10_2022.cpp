// https://my.newtonschool.co/playground/code/kkt84zpw5z66/

#include <iostream>
#include <vector>
#include <queue>

int main() {
    int N, X, Y;
    std::cin >> N >> X >> Y;
    X--, Y--;

    std::vector<std::vector<int>> G(N, std::vector<int>());
    for (int i =0; i < N-1; i++) {
        G[i].push_back(i+1);
        G[i+1].push_back(i);
    }
    G[X].push_back(Y);
    G[Y].push_back(X);
    std::vector<int> ans(N, 0);
    std::vector<int> dist;
    std::queue<int> que;

    for (int i = 0; i < N; i++) {
        que.push(i);
        dist = std::vector<int>(N, -1);
        dist[i] = 0;    
        while (!que.empty()) {
            auto current = que.front();
            que.pop();
            for (auto next : G[current]) {
                if (dist[next] == -1) {
                    que.push(next);
                    dist[next] = dist[current] + 1;
                }
            }
        }
        for (int j = i; j < N; j++) {
            ans[dist[j]]++;
        }
    }

    for (int i = 1; i < N; i++) {
        std::cout << ans[i] << std::endl;
    }
}