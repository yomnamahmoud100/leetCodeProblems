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
int addDigits(int num) {
    string numString = to_string(num);
    while (true){
        int ans = 0;
        for (int i = 0; i < numString.size(); ++i) {
            ans+=numString[i]-'0';
        }
        if (ans <= 9 && ans >= 0)return ans;
        else numString = to_string(ans);
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout<<addDigits(0)<<endl;
    return 0;
}
