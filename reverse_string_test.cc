#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;


string reverse_string(string n){
    string reverse_str = "";
    for (int i = n.length() - 1; i >= 0; i--){
        reverse_str += n.substr(i,1);
     }
    return reverse_str;
}



TEST_CASE("reverse_string(s) returns s backwards") {
    CHECK(reverse_string("happy") == "yppah");
    CHECK(reverse_string("GHC!") == "!CHG");
    CHECK(reverse_string("The end.") == ".dne ehT");
}
