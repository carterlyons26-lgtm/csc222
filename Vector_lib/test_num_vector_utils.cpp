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

    vector<int> nums1 = {10, 20, 30, 40};
    string numstr1 = render_num_vector(nums1);
    string expected1 = "10 20 30 40";
    CHECK(numstr1 == expected1);

    vector<int> nums2 = {1, 2, 3, 4, 5, 6, 7, 8};
    string numstr2 = render_num_vector(nums2);
    string expected2 = "1 2 3 4 5 6 7 8";
    CHECK(numstr2 == expected2);
}

TEST_CASE("Testing num_vector_sum") {
    vector<int> nums = {1, 3, 7};
    CHECK(11 == num_vector_sum(nums));
}

TEST_CASE("Testing num_vector_product") {
    vector<int> nums = {2, 3, 7};
    CHECK(42 == num_vector_product(nums));
}

TEST_CASE("Testing only_evens") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    vector<int> evens = only_evens(nums);
    string expected = "2 4 6 8 12 14 22";
    CHECK(render_num_vector(evens) == expected);
}
