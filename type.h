#ifndef TYPE_H
#define TYPE_H
#include "subroutine.h"

class Type
{
private:
    string _parent;
    string _type_name;
    vector<Variable> privateVarible, protectedVariable, publicVariable;
    vector<Subroutine*> privateSubroutine, protectedSubroutine, publicSubroutine;
    vector<Subroutine*> constructor;
public:
    Type();
    Subroutine global;
    Variable getVariableByName(string name, Variable &localVar, int access);
    Variable getSubroutineByName(string name, Subroutine &localSub, string argsType, int access);
};

#endif // TYPE_H
