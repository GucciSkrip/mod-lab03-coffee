// Copyright 2022 GHA Test Team
#ifndef AUTOMATA_H
#define AUTOMATA_H

#include <string>
#include <vector>

enum STATES { OFF, WAIT, ACCEPT, CHECK, COOK };

class Automata {
public:
    Automata();
    void on();
    void off();
    void coin(int coin);
    void getMenu();
    STATES getState();
    void choice(int item);
    bool check();
    void cancel();
    void cook();
    void finish();
private:
    int cash;
    std::vector<std::string> menu;
    std::vector<int> prices;
    STATES state;
    int choice_;
    int current_;
};

#endif // AUTOMATA_H