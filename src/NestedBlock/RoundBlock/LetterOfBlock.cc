#include <string>
#include <memory>
#include "NestedBlock/RoundBlock/LetterOfBlock.h"

std::string LetterOfBlock::getValue() const
{
    int index = (int)(letter->getDouble())-1;
    return str->getValue().substr(index, index+1);
}

LetterOfBlock::LetterOfBlock(std::shared_ptr<NestedBlock> l, std::shared_ptr<NestedBlock> s) : letter(l), str(s) {}
