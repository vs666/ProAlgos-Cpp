#include "third_party/catch.hpp"
#include "algorithm/number_theory/fibonacci_golden.hpp"

TEST_CASE("Base cases", "[fibonacci]") {
    REQUIRE(fibonacci(0) == 0);
    REQUIRE(fibonacci(1) == 1);
}

TEST_CASE("Normal cases", "[fibonacci]") {
    REQUIRE(fibonacci(2) == 1);
    REQUIRE(fibonacci(7) == 13);
    REQUIRE(fibonacci(15) == 610);
    REQUIRE(fibonacci(18) == 2584);
    REQUIRE(fibonacci(23) == 28657);
    REQUIRE(fibonacci(50) == 12586269025);
    REQUIRE(fibonacci(64) == 10610209857723U);
}

TEST_CASE("Overflow cases", "[fibonacci]") {
    REQUIRE(fibonacci(94) == -1);
    REQUIRE(fibonacci(1500) == -1);
}
