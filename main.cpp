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
#include <vector>
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
//int main(){
//    int n;
//    cin >> n;
//    vector<int> v(n + 1, 0);
//    v[0] = 0;
//    v[1] = 0;
//    v[2] = 1;
//    if (n == 1){
//        cout << 0;
//        return 0;
//    }
//    int a = 1;
//    int cnt = 0;
//    while (a < n){
//        a *= 2;
//        ++cnt;
//    }
//    cout << cnt ;
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
//typedef unsigned long long ul;
//typedef long long ll;
//int main(){
//    ul n, k, a;
//    cin >> n >> k;
//    vector<vector<ul>> v(10, vector<ul>(0));
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
//        ll j = v[el].size() - 1;
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
    int a1, b1, a2, b2;
    cin >> l >> r;
    if (l>r){
        cout << 0;
        return 0;
    }
    vector<int> v = vector<int>(10, 0);
    int cnt = 0;
    int res;
    while (l > 0){
        res = l % 10;
        v[res] = 1;
        l /= 10;
        ++cnt;
    }
    b1 = cnt;
    int f = 0;
    for (int i = res + 1; i < 10; ++i){
        if (v[i]) f = 1;
    }
    if (f){
        a1 = res + 1;
    }
    else a1 = res;
    ///
    v = vector<int>(10, 0);
    cnt = 0;
    while (r > 0){
        res = r % 10;
        v[res] = 1;
        r /= 10;
        ++cnt;
    }
    b2 = cnt;
    f = 0;
    for (int i = 0; i < res; ++i){
        if (v[i]) f = 1;
    }
    if (f){
        a2 = res - 1;
        if (!a2){
            a2 = 9;
            --b2;
        }
    }
    else a2 = res;
//    cout << "a1 " << a1 << " b1 " << b1 << " a2 " << a2 << " b2 " << b2 << endl;
    if (b2 - b1 > 1){
        cout << (b2 - b1 + 1) * 9 + a2 + (10 - a1) << endl;
    }
    else if (b2 - b1 == 1){
        cout << a2 + (10 - a1) << endl;
    }
    else cout << (a2 - a1 + 1) << endl;
    return 0;
}