#include <iostream>
#include <map>
using namespace std;

const int MAX = 100;
int g, n, a[MAX], m, b[MAX];
map<int, int> s;


void Input(){
    cin>>n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin>>m;
    for (int i = 1; i <= m; i++)
        cin >> b[i];
}

int Output(){
    int count = 0;
    for(int i = 1; i <= n; i++)
        if(s[a[i]] == 0)
            s[a[i]] = 1;
    for(int i = 1; i <= m; i++)
        if(s[b[i]] == 1)
            count++;
    return count;
}

int main()
{
    cin >> g;
    for (int i = 0; i < g; i++)
    {
        Input();
        cout << Output() << endl;
    }
    return 0;
}