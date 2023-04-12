#pragma once

#include <string>

#include "astnode.hpp"

class Add : public ASTNode {
  public:
    Add(const std::string &repr, ASTNode *left, ASTNode *right)
            : ASTNode(repr, left, right)
            , val_(repr) {};

    Add(const Add &other) = delete;

    ~Add();

    std::string value() const { return val_; }

    private:
        std::string val_;
};

