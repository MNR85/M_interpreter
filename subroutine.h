
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

    Variable returnVal;
    vector<Variable> variableCtx;
public:

    bool isReturnValReady();
    void addVariableToCtx(Variable localVar);
    bool getVariableByName(string name, Variable &localVar);
    bool getVariableByIdx(int idx, Variable &localVar);
    bool setVariableByName(Variable &localVar);
    bool setVariableByIdx(int idx, Variable &localVar);
    vector<Variable *> getSubRoutineVariables();

    Variable* getReturnVal();

    string getSubRoutineReturnType();
    void setSubRoutineReturnType(string getSubRoutineReturnType);

    string getSubRoutineName();
    void setSubRoutineName(string getSubRoutineName);

    void addSubRoutineVariables(Variable *argument);

    vector<string> getSubRoutinesParameter() const;
    void setSubRoutinesParameter(const vector<string> &getSubRoutinesParameter);

    LULUParser::BlockContext* getSubRoutineStatements();
    void setSubRoutineStatements(LULUParser::BlockContext* subRoutineStatements);

    string ToString();
};


#endif // SUBROUTINE_H
