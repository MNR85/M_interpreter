
#ifndef SUBROUTINE_H
#define SUBROUTINE_H

#include "LULUParser.h"
#include "variable.h"

class Subroutine
{
public:
    Subroutine();

private:
    string _subRoutineName;
    LULUParser::BlockContext* _subRoutineStatements;

    vector<Variable> returnVal;
    vector<Variable> variableCtx;
public:
    int getWidth();
    bool isReturnValReady();
    void addVariableToCtx(Variable localVar);
    bool getVariableByName(string name, Variable &localVar);
    bool getVariableByIdx(int idx, Variable &localVar);
    bool setVariableByName(Variable &localVar);
    bool setVariableByIdx(int idx, Variable &localVar);
    vector<Variable *> getSubRoutineVariables();

    Variable* getReturnVal();

    vector<Variable> getSubRoutineReturnVariables() const;
    void setSubRoutineReturnType(const vector<Variable> &returnVars);

    string getSubRoutineName();
    void setSubRoutineName(string getSubRoutineName);

    //void addSubRoutineVariables(Variable *argument);

    vector<string> getSubRoutinesParameter() const;
    void setSubRoutinesParameter(const vector<Variable> &getSubRoutinesParameter);

    LULUParser::BlockContext* getSubRoutineStatements();
    void setSubRoutineStatements(LULUParser::BlockContext* subRoutineStatements);

    string ToString();
};


#endif // SUBROUTINE_H
