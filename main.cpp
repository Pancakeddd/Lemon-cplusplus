#include <iostream>
#include <array>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <fstream>

#include "src/globals.h"
#include "src/lexer.hpp"
#include "src/functions.hpp"
#include "src/parser.hpp"



enum Tokens: unsigned int {
    STACK_PUSH,
    STACK_POP,
    STACK_CLEAR,
    STACK_PEEK,

    REG_SET,
    REG_CLEAR,

    REG_INCR,
    REG_DECR,

    PRINT_RAW,
    PRINT_ASCII,
    INPUT,

    DATA_COPY,

    LABEL,
    GOTO,

    JUMP_IFZERO,
    JUMP_IFEQUAL,
    JUMP_IFMORE,
    JUMP_IFLESS
}


/*
    PANCAKES: Parser
    (make parser in another file)
        use the above enum to match functions to tokens.
        e.g.

        switch (token) {
            case LABEL:
                // call function
                break;
        }
*


/*

    JACK: Lexer
    (make lexer in another file)
        use the code file to generate tokens and arguments for pancakes to use in his parser.
        e.g.

        tokens = [
            [LABEL, "NAME"]
        ]

        etc.
*/


/*

    EZRA: Functions & Globals
        (do it in another file.)
        make the functions for pancakes to use.
        e.g.

        void push(int register) {
            STACK.push(&register);
        }

        etc.

*/



int main(int argc, char const *argv[]) {

    return 0;
}





