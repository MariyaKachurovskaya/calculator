#pragma once

#include <string>

#include "astnode.hpp"

class Div : public ASTNode {
  public:
    Div(const std::string &repr, ASTNode *left, ASTNode *right)
            : ASTNode(repr, left, right) {};
};

