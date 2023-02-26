#include <iostream>

using namespace std;
//int main() {
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//    if (d <= b){
//        cout << a;
//        return 0;
//    }
//    cout << (a + (d - b) * c) << endl;
//    return 0;
//}
//#include <vector>
//int main(){
//    int n, cnt = 0;
//    cin >> n;
//    while (!(n % 2)){
//        n /= 2;
//        ++cnt;
//    }
//
//    cnt += n / 2 + 1;
//    cout << cnt;
//    return 0;
//}

//#include <vector>
//#include<algorithm>
//int main(){
//    int n, t, p, l;
//    cin >> n >> t;
//    vector<int> v(n, 0);
//    for (int i =0; i < n; ++i){
//        cin >> p;
//        v[i] = p;
//    }
//    l = v[0];
//    int m = p;
//    cin >> p;
//    p = v[p - 1];
////    cout << "p " << p << endl;
//    if (p - l <= t || p >= m - t){
//        cout << m - l;
//    }
//    else cout << m - l + min(m - p, p - l);
//    return 0;
//}
//#include<vector>
//#include <algorithm>
//#include <valarray>
//
//typedef long long ll;
//int main(){
//    ll n, k, a;
//    cin >> n >> k;
//    vector<vector<int>> v(10, vector<int>(0));
//    for (int i = 0;i < n; ++i){
//        cin >> a;
//        int p = 0;
//        while (a > 0){
//            v[p++].push_back(a % 10);
//            a /= 10;
//        }
//    }
//    a = 0;
//    int l = 0;
//    int el = 9;
//    while (l < k && el >= 0){
//        sort(v[el].rbegin(), v[el].rend());
//        int j = v[el].size() - 1;
//        while (j >= 0 && l < k){
//            a += (int)pow(10, el) * (9 - v[el][j--]);
//            v[el].pop_back();
//            ++l;
//        }
//        --el;
//    }
//    cout << a;
//    return 0;
//}

typedef long long ll;
int main(){
    ll l,r;
    cin >> l >> r;

    return 0;
}