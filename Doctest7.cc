#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;


int is_prime(int n){
    int check_num = 0;
    int set_num = n;
    if (n % 2 == 0 & n != 2){
       return false;
   }
   while (n--){
    if (set_num % n == 0){
        check_num++;
   }
   if (check_num < 2 & set_num / 1 == set_num){
       return true;
   }
   if (check_num >= 2){
       return false;
   }

   }
}    



TEST_CASE("is_prime(int n) returns true if n is a prime number") {
    CHECK(is_prime(0) == false);
    CHECK(is_prime(1) == false);
    CHECK(is_prime(2) == true);
    CHECK(is_prime(3) == true);
    CHECK(is_prime(4) == false);
    CHECK(is_prime(9) == false);
    CHECK(is_prime(19) == true);
    CHECK(is_prime(27) == false);
}


