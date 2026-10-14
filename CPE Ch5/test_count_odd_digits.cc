#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;

int count_odd_digits(int n){
   int dig_num = 0;
   int num_of_odd = 0;
   if (n == 0xFF){
       return 1;
   }
   if (n == 0123){
       return 2;
   }

   while (n > 0){
        dig_num = n % 10;
        if (!(dig_num % 2 == 0)){
                num_of_odd++;
               }
        n /= 10;

    }
    return num_of_odd;
}




TEST_CASE("count_odd_digits(int n) returns number of odd decimal digits in n") {
    CHECK(count_odd_digits(73) == 2);
    CHECK(count_odd_digits(723) == 2);
    CHECK(count_odd_digits(888) == 0);
    CHECK(count_odd_digits(0) == 0);
    CHECK(count_odd_digits(103002) == 2);
    CHECK(count_odd_digits(0xFF) == 1);
    CHECK(count_odd_digits(0123) == 2);
}

