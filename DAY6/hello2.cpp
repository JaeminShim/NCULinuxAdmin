// hello2.cpp
#include <iostream>
#include <vector>
#include <range/v3/all.hpp>	// C++17 (g++ or clang만 가능)
using namespace std;
using namespace ranges;

// git clone https://github.com/ericniebler/range-v3
// g++ hello2.cpp -std=c++14 -I./range-v3/include -o hello2
int main()
{
	vector<int> v{1,2,3,4,5,6,7,8,9,10};
	auto r1 = v | view::take(5);
	cout << r1 << endl;
}

