#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/1005815/doctest/doctest/doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

TEST_CASE("Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);
    vector<int> nums = {10, 20, 30,40};
    string numstr = render_num_vector(nums);
    string expected = "10 20 30 40";
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    string numstr = render_num_vector(nums);
    string expected = "1 2 3 4 5 6 7 8";
}

