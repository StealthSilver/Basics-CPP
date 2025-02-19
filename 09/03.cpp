#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> ch = {'a', 'p', 'o', 'k'};

    // for each loop
    for (char val : ch)
    {
        cout << val << endl;
    }

    return 0;
}
