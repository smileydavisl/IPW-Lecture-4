#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include <iostream>
#include <string>
#include "functions_to_implement.h"

using namespace std;

TEST_CASE("final string is calculated with glue"){
	string result = "";
	vector<string> pieces = {"monday", "tuesday", "wednesday"};
	string glue = "and";
    REQUIRE(Join(pieces, glue) == "mondayandtuesdayandwednesdayand");
}

TEST_CASE("positive or negative is found"){
	int x = -4;
    REQUIRE(Sign(x) == -1);
}


TEST_CASE("sum of vector is computed"){
	vector<double> nums = {-2, 6, 13};
    REQUIRE(Sum(nums) == 17);
}



