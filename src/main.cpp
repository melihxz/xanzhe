#include <iostream>
#include "lexer.h"
#include "parser.h"

int main() {
    std::string sourceCode = "a = b + 3;";
    Lexer lexer(sourceCode);
    Parser parser(lexer);

    parser.parse();

    return 0;
}
