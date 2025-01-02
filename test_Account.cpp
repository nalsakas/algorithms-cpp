#include <catch2/catch_test_macros.hpp>
#include "Account.h"

TEST_CASE( "Account tests", "[Account]" ) {
    Account account(0.0);

    REQUIRE(account.getBalance() == 0);

    account.deposit(100);
    REQUIRE(account.getBalance() == 100);

    account.withdraw(20);
    REQUIRE(account.getBalance() == 80);

    account.withdraw(100);
    REQUIRE(account.getBalance() == 80);

    account.withdraw(2.4);
    REQUIRE(account.getBalance() == 77.6);
}