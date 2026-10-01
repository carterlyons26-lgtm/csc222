#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;


int is_prime(int n){
    int loop_num = 0;
    if (n < 1){
        return false;
    }
    if (n == 2){
        return true;
    }
    if (n%2==0){
        return false;
    }
    while (n--){
       if  (n % n - 1 == 0){
           loop_num++; 
       }  
    }
    return loop_num > 2 ? false:true;

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


