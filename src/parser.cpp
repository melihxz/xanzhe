#include "parser.h"

Parser::Parser(Lexer &lexer) : lexer(lexer), currentToken(lexer.nextToken()) {}

void Parser::eat(Token token) {
    if (currentToken == token) {
        currentToken = lexer.nextToken();
    } else {
        // Hata işleme
    }
}

void Parser::parse() {
    expr();
    // Parse işlevi için diğer kodlar
}

void Parser::expr() {
    // Basit bir ifadeyi analiz etme kodu
}
