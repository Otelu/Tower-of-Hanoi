#include<iostream>

using namespace std;

int t1, t2, t3;
int i, n, k;

void han(int n, int a, int b, int c)
{
    if(n==1)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        han(n-1, t1, t3, t2);
        cout << t1 << " " << t2 << endl;
        han(n-1, t3, t2, t1);
    }
}

int main()
{
    cout << "n=";
    cin >> n;

    t1 = 1;
    t2 = 2;
    t3 = 3;
    k = 1;

    for(i = 1; i <= n; i++)
    {
        k *= 2;
    }

    cout << k - 1 << endl;

    han(n, t1, t3, t2);

    return 0;
}
