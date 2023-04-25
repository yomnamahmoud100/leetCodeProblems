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

class SmallestInfiniteSet {
public:
    set<int>st;
    SmallestInfiniteSet() {
        for(int i = 1;i<=1000; i++){
            st.insert(i);
        }
    }

    int popSmallest() {
        int val = *st.begin();
        st.erase(val);
        return val;
    }

    void addBack(int num) {
        st.insert(num);
    }
};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    SmallestInfiniteSet* obj = new SmallestInfiniteSet();
    int param_1 = obj->popSmallest();
    cout<<param_1<<endl;
    obj->addBack(5);

    return 0;
}
