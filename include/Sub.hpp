#pragma once

#include <string>

#include "astnode.hpp"

class Sub : public ASTNode {
  public:
    Sub(const std::string &repr, ASTNode *left, ASTNode *right)
            : ASTNode(repr, left, right)
            , val_(repr) {}

    std::string value() const { return val_; }

private:
    std::string val_;
};

