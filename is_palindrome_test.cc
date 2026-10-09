#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;


int is_palindrome(string n){
    string reverse_str = "";
    for (int i = n.length() - 1; i >= 0; i--){
        reverse_str += n.substr(i,1);
     }
    return reverse_str == n ? 1:0;
}



TEST_CASE("is_palindrome detects palindromes") {
    CHECK(is_palindrome("") == true);
    CHECK(is_palindrome("a") == true);
    CHECK(is_palindrome("aba") == true);
    CHECK(is_palindrome("abba") == true);
    CHECK(is_palindrome("abc") == false);
}
