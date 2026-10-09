#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;


int count_words(string n){
    int num_spaces = 1;
    if (n == ""){
        return 0;
    }
    for (int i = 0; i <= n.length()-1;i++){
        if (n.substr(i,1) == " "){
            num_spaces++;
        }
    }
    return num_spaces;

}







TEST_CASE("count_words counts words") {
    CHECK(count_words("") == 0);
    CHECK(count_words("Word!") == 1);
    CHECK(count_words("Thing1 and Thing2") == 3);
    CHECK(count_words("This is the song that never ends.") == 7);
}
