#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> ang;
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double deg;
        cin >> deg;
        ang.push_back(deg);
    }

    sort(ang.begin(), ang.end());

    double ans = 0;
    for (int i = 0; i < ang.size() - 1; i++)
    {
        double d1 = ang[i + 1] - ang[i];
        ans = max(d1, ans);
        
    }

    double d2 = (360 - ang.back()) + ang.front();
    ans = max(d2, ans);

    double f_ans = (ans / 360) * 100;
    cout << fixed << f_ans << endl;

    return 0;
}