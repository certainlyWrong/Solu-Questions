
#include <iostream>
using namespace std;

int main(void)
{
    int i[4] = {};
    cin >> i[0] >> i[1] >> i[2] >> i[3];

    cout << "DIFERENCA = " << i[0] * i[1] - i[2] * i[3] << endl;

    return 0;
}