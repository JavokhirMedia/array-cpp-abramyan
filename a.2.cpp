#include "iostream"
using namespace std;

int main()
{
    int a, b = 2;
    cin>>a;

    for (int i = 0; i < a; ++i) {
        cout<<b;
        b = b*b;
    }

}