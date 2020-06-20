#include "subroutine.h"

Subroutine::Subroutine()
{
}
string Subroutine::getSubRoutineName()
{
    return _subRoutineName;
}

void Subroutine::setSubRoutineName( string subRoutineName)
{
    _subRoutineName = subRoutineName;
}

void Subroutine::setSubRoutinesParameter(const vector<Variable> &getSubRoutinesParameter)
{

}

LULUParser::BlockContext *Subroutine::getSubRoutineStatements()
{
    return _subRoutineStatements;
}

void Subroutine::setSubRoutineStatements(LULUParser::BlockContext *subRoutineStatements)
{
    _subRoutineStatements = subRoutineStatements;
}

string Subroutine::ToString()
{
    string returnS = "";
    returnS += returnVal.at(0).name + "!"+_subRoutineName+"\r\n";
    for(int i=0; i<variableCtx.size(); i++){
        returnS += variableCtx.at(i).ToString();
    }
    returnS += "Return Value: "+returnVal.at(0).ToString();
    returnS += "\r\n";
    return returnS;
}


vector<Variable *> Subroutine::getSubRoutineVariables()
{
    vector<Variable *> varByRef;
    for(int i=0; i<variableCtx.size(); i++)
        varByRef.push_back(&variableCtx[i]);
    return varByRef;
}

bool Subroutine::isReturnValReady()
{
    return returnVal.at(0).evaluated;
}

bool Subroutine::getVariableByIdx(int idx, Variable &localVar)
{
    if(idx<variableCtx.size()){
        localVar = variableCtx.at(idx);
        return true;
    }
    else
        return false;
}



bool Subroutine::setVariableByName(Variable &localVar)
{
    for(int i=0; i<variableCtx.size(); i++)
        if(localVar.name == variableCtx[i].name){
            variableCtx.at(i)=localVar;
            return true;
        }
    return false;
}

bool Subroutine::setVariableByIdx(int idx, Variable &localVar)
{
    if(idx<variableCtx.size()){
        variableCtx.at(idx)=localVar;
        return true;
    }
    else
        return false;
}

void Subroutine::addVariableToCtx(Variable localVar)
{
    variableCtx.push_back(localVar);
}

bool Subroutine::getVariableByName(string name, Variable &localVar)
{
    for(int i=0; i<variableCtx.size(); i++)
        if(name == variableCtx[i].name){
            //Variable *localVar1 = variableCtx.at(i);
            localVar = variableCtx.at(i);
            return true;
        }
    return false;
}

Variable *Subroutine::getReturnVal()
{
    return &returnVal.at(0);
}

vector<Variable> Subroutine::getSubRoutineReturnType() const
{
    return returnVal;
}

void Subroutine::setSubRoutineReturnType(const vector<Variable> &returnVars)
{
    returnVal =returnVars;
}

//string Subroutine::getSubRoutineReturnType()
//{
//    return returnVal.at(0).type;
//}

//void Subroutine::setSubRoutineReturnType(string subRoutineReturnType)
//{
//    returnVal.at(0).type = subRoutineReturnType;
//}
