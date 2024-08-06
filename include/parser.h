#ifndef PARSER_H
#define PARSER_H

#include "lexer.h"

class Parser {
public:
    Parser(Lexer &lexer);
    void parse();
    // Diğer fonksiyonlar ve üye değişkenler

private:
    Lexer &lexer;
    Token currentToken;
    void eat(Token token);
    void expr();
    // Diğer yardımcı fonksiyonlar
};

#endif // PARSER_H
