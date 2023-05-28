#include <bits/stdc++.h>

using namespace std;


void time() {
    cout << "GOOOOOOOOOOOOOOO\n";
    string s;
    time_t start, end;
    double ans = 0;
    time(&start);
    getline(cin, s);
    ans += s.size();
    while (s != "") {
        getline(cin, s);
        ans += s.size();
    }
    time(&end);
    cout << "Yors typing speed  -  one char / " << ans / double(end - start) << " seconds\n";
    return;
}

int main() {
    cout
            << "Aloha! Now you can find out how fast you type. Just press enter to continue, the timer get start instantly, so get ready"
            << "P.S. Press enter twice when you`re done.\n";
    string h;
    getline(cin, h);
    while (h == "") {
        time();
        getline(cin, h);
    }
    return 0;
}