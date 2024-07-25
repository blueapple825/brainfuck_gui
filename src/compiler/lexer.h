#ifndef _LEXER_H
#define _LEXER_H

#include <string>
#include <list>

using namespace std;

typedef enum _TokenType
{
}TokenType;

typedef struct _Token
{
    TokenType type;
    string value;
}Token;

typedef class _Lexer
{
private:
    char* code;
    int curPos;

public:
    Lexer(char* code);
    list<Token> lexing();
    char nextChar();
}Lexer;

#endif
