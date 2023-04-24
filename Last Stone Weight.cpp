#include <iostream>
#include <queue>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <math.h>
#include <stack>
#include <set>
#include <string>
#include <map>

using namespace std;

int lastStoneWeight(vector<int>& stones) {
    priority_queue<int>sortedStones;
    for (int i = 0; i < stones.size(); ++i) {
        sortedStones.push(stones[i]);
    }
    while (sortedStones.size() != 1){
        int x = sortedStones.top();
        sortedStones.pop();
        int y = sortedStones.top();
        sortedStones.pop();
        if (x == y)sortedStones.push(0);
        else
            sortedStones.push(abs(x-y));

    }
    return sortedStones.top();

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int>v = {2,7,4,1,8,1};
    cout<<lastStoneWeight(v);

    return 0;
}
