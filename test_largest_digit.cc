#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;


int largest_digit(int n){
    int dig = 0;
    int largest_dig = n % 10;
    while (n > 0){
        dig = n % 10;
        if (dig >= largest_dig){
            largest_dig = dig;
        }
        n /= 10;
    }
    return largest_dig;

}








TEST_CASE("largest_digit(int n) returns the largest digit in n") {
    CHECK(largest_digit(0) == 0);
    CHECK(largest_digit(1030) == 3);
    CHECK(largest_digit(7986) == 9);
    CHECK(largest_digit(-584) == 8);
    CHECK(largest_digit(0xFF) == 5);
    CHECK(largest_digit(0123) == 8);
}
