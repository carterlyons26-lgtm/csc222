#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;

int gcd(int n, int m){
    int gcd = 0;
    int largest = n >= m ? n : m;
    while (largest--){
        if (n % largest  == 0 && m % largest == 0){
            gcd  = largest;
        }

      }
    return gcd;
}




TEST_CASE("gcd(int n, int m) returns the GCD of n and m") {
    CHECK(gcd(12, 8) == 4);
    CHECK(gcd(48, 18) == 6);
    CHECK(gcd(7, 13) == 1);
    CHECK(gcd(294, 210) == 42);
    CHECK(gcd(19, 19) == 19);
}


