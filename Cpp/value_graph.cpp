#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    //정점의 갯수와 변의 갯수
    int N, M;
    cin >> N >> M;

    //그래프
    vector<vector<pair<int,int>>> graph(N);
    for(int i = 0; i < N; ++i) {
        int a, b, v; //v = 가중치
        cin >> a >> b >> v;
        graph[a].push_back(pair(b,v));

        // 무향 그래프라면 다음 줄을 추가
        // graph[b].push_back(a);
    }
}
