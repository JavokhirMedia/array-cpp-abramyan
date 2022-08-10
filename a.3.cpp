#include "iostream"
#include "math.h"
using namespace std;

int main()
{
    int n,a;
    cin>>n;

    a = (n*n*n*n*n) + 8 * (n*n*n*n) - 5 * (n*n*n) + 3 * (n*n) + n - 12;
    cout<<a;
}