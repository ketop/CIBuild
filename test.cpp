#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;
    for(int i = 1; i < 100; ++i)
    {
        ivec.push_back(i*(i-1)%(i/2+1));
    }
    for(int i = 1; i < 100; ++i)
    {
        cout <<i<<"th Element equals " <<ivec[i] << endl;
    }
    return 0;
}
