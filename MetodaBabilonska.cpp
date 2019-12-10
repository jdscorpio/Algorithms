#include <iostream>

using namespace std;

int main()
{
    double S;
    int t;
    cin >> t;

    while(t--)
    {
    cin >> S;
    double xprev = S/2;
    double xnext = 0.5*(xprev+S/xprev);

    while(xnext-xprev>0)
    {
        xprev = xnext;
        xnext = 0.5*(xprev+S/xprev);
    }
    cout.precision(10);
    cout << fixed << xnext << endl;
    }


    return 0;
}
