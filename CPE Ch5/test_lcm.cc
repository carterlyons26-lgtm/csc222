#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;

int lcm(int n, int m){
    int gcd = 0;
    int largest = n >= m ? n : m;
    while (largest > 0){
        if (n % largest  == 0 && m % largest == 0){
            gcd = largest;
            break;
        }
        largest--;

      }
    int lcm = (n * m)/gcd;
    return lcm;
}

TEST_CASE("lcm(int n, int m) returns the LCM of n and m") {
    CHECK(lcm(12, 20) == 60);
    CHECK(lcm(3, 5) == 15);
    CHECK(lcm(6, 10) == 30);   
    CHECK(lcm(7, 7) == 7);
    CHECK(lcm(24, 56) == 168);
}

