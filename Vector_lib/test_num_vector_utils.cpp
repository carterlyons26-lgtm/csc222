#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/1005815/doctest/doctest/doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;


TEST_CASE("Testing nums_between function") {
    vector<int> nums = {11, 2, 13, 4, 10, 26, 7, 88, 19, 20, 14, 5, 32};
    vector<int> nums2 = nums_between(nums, 10, 20);
    string expected = "11 13 10 19 20 14";
    CHECK(render_num_vector(nums2) == expected);
}
