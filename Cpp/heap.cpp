#include <iostream>       // std::cout
#include <vector>         // std::vector
#include <algorithm>
using namespace std;
void print(vector<int>& vs)
{
    for (auto v : vs)
        cout << v << ' ';
    cout << endl;
}
int main() {
    vector<int> v;
    v.push_back(1);v.push_back(2);v.push_back(3);v.push_back(5);v.push_back(4);
    make_heap(v.begin(), v.end());
    v.push_back(10);
    push_heap(v.begin(),v.end());
    print(v);
    cout << endl;
    pop_heap(v.begin(),v.end());
    print(v);
    return 0;
}
