#ifndef LEXER_H
#define LEXER_H

#include <string>

enum class Token {
    // Token türleri
    TOK_EOF,
    TOK_IDENTIFIER,
    TOK_NUMBER,
    TOK_OPERATOR,
    // diğer token türleri
};

class Lexer {
public:
    Lexer(const std::string &source);
    Token nextToken();
    // Diğer fonksiyonlar ve üye değişkenler

private:
    std::string source;
    size_t currentIndex;
    char currentChar;
    void advance();
    // Diğer yardımcı fonksiyonlar
};

#endif // LEXER_H
