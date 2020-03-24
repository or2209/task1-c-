/**
 *
 * AUTHORS: Ariel Yechezkel , or laharty
 * 
 * Date: 2020-02
 */
#include <iostream>
#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;


TEST_CASE("Test replacement of p and b")
{
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
}

TEST_CASE("Test replacement of lower-case and upper-case")
{
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of d and t")
{
    string text = "training in the dark";
    CHECK(find(text, "draining") == string("training"));
    CHECK(find(text, "Draining") == string("training"));
    CHECK(find(text, "DRaining") == string("training"));
    CHECK(find(text, "tark") == string("dark"));
    CHECK(find(text, "taRk") == string("dark"));
    CHECK(find(text, "TARK") == string("dark"));
    CHECK(find(text, "draininG") == string("training"));
    CHECK(find(text, "drainInG") == string("training"));
    // CHECK_THROWS_AS(find(text, "braining"), std::exception);
	// CHECK_THROWS_AS(find(text, "jark"), std::exception);
	// CHECK_THROWS_AS(find(text, "kark"), std::exception);
}



TEST_CASE("Test replacement of v and w")
{
    string text = "wow its wonderful";
    CHECK(find(text, "vow") == string("wow"));
    CHECK(find(text, "Vow") == string("wow"));
    CHECK(find(text, "vov") == string("wow"));
    CHECK(find(text, "VOV") == string("wow"));
    CHECK(find(text, "wov") == string("wow"));
    CHECK(find(text, "wOv") == string("wow"));
    CHECK(find(text, "wow") == string("wow"));
    CHECK(find(text, "woW") == string("wow"));
    CHECK(find(text, "vonderful") == string("wonderful"));
    CHECK(find(text, "vonderFUL") == string("wonderful"));
    CHECK(find(text, "wonderful") == string("wonderful"));
    CHECK(find(text, "WondeRful") == string("wonderful"));
}

TEST_CASE("Test replacement of b and p and f")
{
    string text = "the boy in the palace";
    CHECK(find(text, "poy") == string("boy"));
    CHECK(find(text, "PoY") == string("boy"));
    CHECK(find(text, "Boy") == string("boy"));
    CHECK(find(text, "foy") == string("boy"));
    CHECK(find(text, "FoY") == string("boy"));
    CHECK(find(text, "balace") == string("palace"));
    CHECK(find(text, "BaLace") == string("palace"));
    CHECK(find(text, "falace") == string("palace"));
     CHECK(find(text, "faLAce") == string("palace"));
}


TEST_CASE("Test replacement of g and j")
{
    string text = "go to google";
    CHECK(find(text, "jo") == string("go"));
    CHECK(find(text, "jO") == string("go"));
    CHECK(find(text, "joogle") == string("google"));
    CHECK(find(text, "jOOgle") == string("google"));
    CHECK(find(text, "goojle") == string("google"));
    CHECK(find(text, "goojlE") == string("google"));
    CHECK(find(text, "Joogle") == string("google"));
    CHECK(find(text, "JooGLE") == string("google"));
    CHECK(find(text, "GO") == string("go"));
}


TEST_CASE("Test replacement of c and k and q")
{
    string text = "coca cola";
    CHECK(find(text, "koka") == string("coca"));
    CHECK(find(text, "KokA") == string("coca"));
    CHECK(find(text, "qoka") == string("coca"));
    CHECK(find(text, "Qoka") == string("coca"));
    CHECK(find(text, "qoqa") == string("coca"));
    CHECK(find(text, "QoQa") == string("coca"));
    CHECK(find(text, "kola") == string("cola"));
    CHECK(find(text, "kOla") == string("cola"));
    CHECK(find(text, "qola") == string("cola"));
    CHECK(find(text, "QOLA") == string("cola"));
}


TEST_CASE("Test replacement of y and i ")
{
    string text = "your id is";
    CHECK(find(text, "iour") == string("your"));
    CHECK(find(text, "ioUr") == string("your"));
    CHECK(find(text, "YoUr") == string("your"));
    CHECK(find(text, "YOUR") == string("your"));
    CHECK(find(text, "ID") == string("id"));
    CHECK(find(text, "iD") == string("id"));
    CHECK(find(text, "ys") == string("is"));
    CHECK(find(text, "Ys") == string("is"));

}



TEST_CASE("Test replacement of o and u ")
{
    string text = "hello world";
    CHECK(find(text, "hellu") == string("hello"));
    CHECK(find(text, "hellU") == string("hello"));
    CHECK(find(text, "wurld") == string("world"));
    CHECK(find(text, "wUrlD") == string("world"));
    CHECK(find(text, "WUrlD") == string("world"));

}


TEST_CASE("Test replacement of o and u ")
{
    string text = "i dont aware to your opinion";
    CHECK(find(text, "upinion") == string("opinion"));
    CHECK(find(text, "upiniun") == string("opinion"));
    CHECK(find(text, "UpInIoN") == string("opinion"));
    CHECK(find(text, "upiniUn") == string("opinion"));
    CHECK(find(text, "OpiNiOn") == string("opinion"));
    CHECK(find(text, "uBiniUn") == string("opinion"));
    CHECK(find(text, "UFiniOn") == string("opinion"));
    CHECK(find(text, "UbInIUn") == string("opinion"));
    CHECK(find(text, "ufiniUn") == string("opinion"));
    CHECK(find(text, "aVaRe") == string("aware"));
    CHECK(find(text, "avaRE") == string("aware"));
    CHECK(find(text, "aWARE") == string("aware"));
    CHECK(find(text, "AVare") == string("aware"));
    CHECK(find(text, "AWaRE") == string("aware"));


}


TEST_CASE("Test replacement of s and z ")
{
    string text = "We will visit the zebras at the zoo";
    CHECK(find(text, "vizit") == string("visit"));
    CHECK(find(text, "ViZit") == string("visit"));
    CHECK(find(text, "sebras") == string("zebras"));
    CHECK(find(text, "sebrAS") == string("zebras"));
    CHECK(find(text, "soo") == string("zoo"));
    CHECK(find(text, "sOo") == string("zoo"));
    CHECK(find(text, "Sebras") == string("zebras"));
    CHECK(find(text, "VIZIt") == string("visit"));

}


TEST_CASE("Test replacement of s and z ")
{
    string text = "Dont mess with Zohan";
    CHECK(find(text, "tont") == string("Dont"));
    CHECK(find(text, "vith") == string("with"));
    CHECK(find(text, "dunt") == string("Dont"));
    CHECK(find(text, "widh") == string("with"));
    CHECK(find(text, "mezz") == string("mess"));
    CHECK(find(text, "wyth") == string("with"));
    CHECK(find(text, "sohan") == string("Zohan"));
    CHECK(find(text, "zuhan") == string("Zohan"));
    CHECK(find(text, "donD") == string("Dont"));
    CHECK(find(text, "Tont") == string("Dont"));
    CHECK(find(text, "WitH") == string("with"));
    CHECK(find(text, "dUnt") == string("Dont"));
    CHECK(find(text, "widH") == string("with"));
    CHECK(find(text, "meZz") == string("mess"));
    CHECK(find(text, "wYth") == string("with"));
    CHECK(find(text, "soHan") == string("Zohan"));
    CHECK(find(text, "zuhAN") == string("Zohan"));
    CHECK(find(text, "DonD") == string("Dont"));
}