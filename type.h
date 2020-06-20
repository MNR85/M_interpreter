#ifndef TYPE_H
#define TYPE_H
#include "subroutine.h"

class Type
{
private:
    string _type;
    string _parent;
    string _type_name;
    vector<Variable> privateVarible, protectedVariable, publicVariable;
    vector<Subroutine*> privateSubroutine, protectedSubroutine, publicSubroutine;
    vector<Subroutine*> constructor;
public:
    Type();
    void addVaribaleToPrivateCTX(Variable localVar);
    void addVaribaleToProtectedCTX(Variable localVar);
    void addVaribaleToPublicCTX(Variable publicVar);
    void addSubroutineToPrivateCTX(Subroutine localSub);
    void addSubroutineToProtectedCTX(Subroutine localSub);
    void addSubroutineToPublicCTX(Subroutine publicSub);
    void addSubroutineToConstructor(Subroutine publicSub);

    Subroutine global;
    Variable getVariableByName(string name, Variable &localVar, int access);
    Variable getSubroutineByName(string name, Subroutine &localSub, string argsType, int access);
    string getTypeName();
    void setTypeName(string typeName);
    string getParentName();
    void setParentName(string parentName);
    string getType();
    void setType(string type);
};

#endif // TYPE_H
