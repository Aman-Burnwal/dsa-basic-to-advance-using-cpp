#include <iostream>
using namespace std;

void hollowPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            if (j == 1 || j == n - i + 1 || i == 1)
                cout << j;
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    hollowPyramid(n);

    return 0;
}
