#pragma once

#include <string>

#include "astnode.hpp"

class Mul : public ASTNode {
  public:
    Mul(const std::string &repr, ASTNode *left, ASTNode *right)
            : ASTNode(repr, left, right) {};
};

