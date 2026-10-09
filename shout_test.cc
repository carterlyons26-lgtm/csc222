#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;




string shout(string n){
    return "";
}




TEST_CASE("shout turns an exclaimation into a demand") {
    CHECK(shout("Don't touch that.") == "DON'T TOUCH THAT!");
    CHECK(shout("Let's go.") == "LET'S GO!");
    CHECK(shout("Leave it there!") == "LEAVE IT THERE!");
}
