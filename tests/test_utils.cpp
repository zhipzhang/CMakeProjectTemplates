#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "Utils.hh"



TEST_CASE("Uniform Distribution", "[uniform]"){
    double min = 0.0;
    double max = 1.0;
    double result = Utils::uniform_distribution(min, max);
    REQUIRE(result >= min);
    REQUIRE(result <= max);
}

TEST_CASE("Simple Trapz Integration", "[simple_trapz]")
{
    vector<double> x;
    vector<double> y;

    for(int i = 0; i < 1000; i++){
        double tmp_x = i * 1e-3;
        x.push_back(tmp_x);
        y.push_back(tmp_x * tmp_x);
    }

    double result = Utils::SimpleTrapzIntegral(x, y);
    REQUIRE(result == Approx(0.333333).epsilon(0.01));

}