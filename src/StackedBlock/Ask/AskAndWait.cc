#include "StackedBlock/Ask/AskAndWait.h"
#include <iostream>
#include <string>
#include <memory>
#include "NestedBlock/NestedBlock.h"
#include "NestedBlock/RoundBlock/Variable.h"

AskAndWait::AskAndWait(std::shared_ptr<NestedBlock> q,
    std::shared_ptr<Variable> av) : question(q),answerVariable(av) {}

void AskAndWait::exec() const
{
    std::string answer;
    std::cout<<question->getValue();
    std::getline(std::cin,answer);
    answerVariable->setValue(answer);
}
