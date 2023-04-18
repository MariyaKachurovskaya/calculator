#pragma once

#include <string>

#include "astnode.hpp"

class Sub : public ASTNode {
  public:
    Sub(const std::string &repr, ASTNode *left, ASTNode *right)
            : ASTNode(repr, left, right) {};
};

