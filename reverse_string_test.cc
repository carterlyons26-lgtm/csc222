#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;


string reverse_string(string n){
    return 0;
}



TEST_CASE("reverse_string(s) returns s backwards") {
    CHECK(reverse_string("happy") == "yppah");
    CHECK(reverse_string("GHC!") == "!CHG");
    CHECK(reverse_string("The end.") == ".dne ehT");
}
