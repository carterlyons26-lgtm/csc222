#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;

int count_vowels(string n){
    int num_vowels = 0;

    for (int i = 0; i <= n.length() -1; i++){
        if (n.substr(i,1) >= "A" && n.substr(i,1) <= "Z"){
             n[i] = n[i] + 'a' - 'A';
        }
    }
    for (int i = 0; i <= n.length() - 1; i++){
        if (n.substr(i,1) == "a" || n.substr(i,1) == "e" || n.substr(i,1) == "i" || n.substr(i,1) == "o" || n.substr(i,1) == "u"){
            num_vowels++;
        }
    }
    return num_vowels;
}





TEST_CASE("count_vowels counts lowercase vowels") {
    CHECK(count_vowels("") == 0);
    CHECK(count_vowels("xyz") == 0);
    CHECK(count_vowels("hello") == 2);
    CHECK(count_vowels("aeiou") == 5);
    CHECK(count_vowels("MISSISSIPPI") == 4);
}
