#include <array>
#include <iostream>
#include <vector>
using namespace std;
enum Event : int { APPLE = 0, PEAR, ENUM_END };
std::array<std::vector<int>, ENUM_END> arr;
std::vector<int>                       arr2;
int                                    main()
{
    int n = 0;
    for (auto& e : arr) e = {};
    {
    }
    // for (auto iter=arr.begin();iter!=arr.end();++iter)
    // *iter = {1,2,3};
    // arr[0]={1,2,3};
    for (auto& e : arr[Event::APPLE])
    {
        std::cout << e << "\n";
        //   std::cout << 1969 << "\n";
    }
    cout << arr[0].size() << endl;
}
