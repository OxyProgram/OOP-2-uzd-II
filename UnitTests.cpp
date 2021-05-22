#define CATCH_CONFIG_MAIN
#include "header.h"

TEST_CASE("Testing student class") {

    student stud;

    REQUIRE(stud.getVid() == 0);
    SECTION("Set name and surname") {
        stud.setVardas("Name");
        stud.setPavarde("Surname");

        REQUIRE(stud.getVardas() == "Name");
        REQUIRE(stud.getPavarde() == "Surname");
    }
    SECTION("Setting an average") {
        stud.setVid(10);

        REQUIRE(stud.getVid() == 10);
    }
    SECTION("Adding multiple grades") {
        student s(stud);

        REQUIRE(s.getVardas() == "Name");
        REQUIRE(stud.getVid() == 10);
    }
}