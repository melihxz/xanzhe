#include "lexer.h"
#include <cctype>

Lexer::Lexer(const std::string &source) : source(source), currentIndex(0) {
    currentChar = source[currentIndex];
}

void Lexer::advance() {
    currentIndex++;
    if (currentIndex >= source.size()) {
        currentChar = '\0';
    } else {
        currentChar = source[currentIndex];
    }
}

Token Lexer::nextToken() {
    while (std::isspace(currentChar)) {
        advance();
    }

    if (currentChar == '\0') return Token::TOK_EOF;
    
    // Token türlerini belirleyin ve döndürün
    // Örneğin, bir sayı algılandığında TOK_NUMBER döndürülebilir

    return Token::TOK_OPERATOR; // Geçici olarak
}
