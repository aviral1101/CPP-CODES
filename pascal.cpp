#include<iostream>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        int n = 1;
        for (int k = 0; k <= i; k++)
        {
            cout << n << " ";
            n = n * (i - k) / (k + 1);
        }
        cout << endl ;
    }

}