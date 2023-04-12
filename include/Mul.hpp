#pragma once

#include <string>

#include "astnode.hpp"

class Mul : public ASTNode {
  public:
    Mul(const std::string &repr, ASTNode *left, ASTNode *right)
            : ASTNode(repr, left, right)
            , val_(repr) {}

    Mul(const Mul &other) = delete;

    ~Mul();

    std::string value() const { return val_; }

    private:
        std::string val_;
};

