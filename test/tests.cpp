// Copyright 2022 GHA Test Team

#include <gtest/gtest.h>
#include "Automata.h"

TEST(task1, test1) {
 Automata coffee = Automata();
 coffee.on();
 coffee.getMenu();
 coffee.choice(1);
 coffee.coin(20);
 EXPECT_EQ(Automata::CHECK, coffee.getState());
 EXPECT_FALSE(coffee.check());
 EXPECT_EQ(Automata::WAIT, coffee.getState());
}

TEST(task1, test2) {
 Automata coffee = Automata();
 coffee.on();
 coffee.getMenu();
 coffee.choice(2);
 coffee.coin(50);
 EXPECT_EQ(Automata::CHECK, coffee.getState());
 EXPECT_FALSE(coffee.check());
 EXPECT_EQ(Automata::WAIT, coffee.getState());
}

TEST(task1, test3) {
 Automata coffee = Automata();
 coffee.on();
 coffee.getMenu();
 coffee.choice(3);
 coffee.coin(40);
 coffee.check();
 EXPECT_EQ(Automata::COOK, coffee.getState());
 coffee.finish();
 EXPECT_EQ(Automata::WAIT, coffee.getState());
}

TEST(task1, test4) {
 Automata coffee = Automata();
 coffee.on();
 coffee.getMenu();
 coffee.choice(1);
 coffee.coin(50);
 coffee.check();
 EXPECT_EQ(Automata::COOK, coffee.getState());
 coffee.finish();
 EXPECT_EQ(0, coffee.getCash());
}

TEST(task1, test5) {
 Automata coffee = Automata();
 coffee.on();
 coffee.off();
 EXPECT_EQ(Automata::OFF, coffee.getState());
 coffee.on();
 coffee.getMenu();
 coffee.choice(1);
 coffee.coin(50);
 coffee.check();
 EXPECT_EQ(Automata::COOK, coffee.getState());
 coffee.off();
 EXPECT_EQ(Automata::OFF, coffee.getState());
}
