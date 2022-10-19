// https://my.newtonschool.co/playground/code/i3aizc5ymo54/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
struct UnionFind {
    vector<int> par;
 
    UnionFind(int N) : par(N) { 
        for (int i = 0; i < N; i++) par[i] = i;
    }
 
    int root(int x) { 
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }
 
    void unite(int x, int y) { 
        int rx = root(x); 
        int ry = root(y); 
        if (rx == ry) return;
        par[rx] = ry; 
    }
 
    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};
 
int main()
{
    int n;
    cin >> n;
 
    long long int nSX, nSY, nEX, nEY;
    cin >> nSX >> nSY >> nEX >> nEY;
 
    vector<pair<pair<long long int, long long int>,
        long long int>> vCircle(n);
 
    int nStartCircleId = -1, nEndCircleId = -1;
 
    for (int i = 0; i < n; i++) {
        cin >> vCircle[i].first.first >> vCircle[i].first.second;
        cin >> vCircle[i].second;
 
        if (vCircle[i].second * vCircle[i].second
            == (nSX - vCircle[i].first.first)
            * (nSX - vCircle[i].first.first)
            + (nSY - vCircle[i].first.second)
            * (nSY - vCircle[i].first.second)) {
            nStartCircleId = i;
        }
 
        if (vCircle[i].second * vCircle[i].second
            == (nEX - vCircle[i].first.first)
            * (nEX - vCircle[i].first.first)
            + (nEY - vCircle[i].first.second)
            * (nEY - vCircle[i].first.second)) {
            nEndCircleId = i;
        }
    }
 
    UnionFind uf(n);
 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
 
            long long int llSqDist
                = (vCircle[i].first.first - vCircle[j].first.first)
                * (vCircle[i].first.first - vCircle[j].first.first)
                + (vCircle[i].first.second - vCircle[j].first.second)
                * (vCircle[i].first.second - vCircle[j].first.second);
            if (abs(vCircle[i].second - vCircle[j].second)
                * abs(vCircle[i].second - vCircle[j].second) <= llSqDist
                && llSqDist <= 
                (vCircle[i].second + vCircle[j].second)
                * (vCircle[i].second + vCircle[j].second)) {
                uf.unite(i, j);
            }
        }
    }
 
    if (uf.same(nStartCircleId, nEndCircleId) == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}