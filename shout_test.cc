#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include </Users/1005815/doctest/doctest/doctest.h>
using namespace std;




string shout(string n){
    for (int i = 0; i <= n.length()-1;i++){
        if (n.substr(i,1) != "," && n.substr(i,1) != "." && n.substr(i,1) != "!" && n.substr(i,1) != "'"){
            n[i] = n[1] + 'A' - 'a';
        }
    }
    n.substr(n.length()-1) = "!";
    return n;
}




TEST_CASE("shout turns an exclaimation into a demand") {
    CHECK(shout("Don't touch that.") == "DON'T TOUCH THAT!");
    CHECK(shout("Let's go.") == "LET'S GO!");
    CHECK(shout("Leave it there!") == "LEAVE IT THERE!");
}
