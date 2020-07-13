#ifndef TYPE_H
#define TYPE_H
#include "subroutine.h"

class Type
{
public:
    Type();
private:
    string _type;
    string _parent;
    string _type_name;
    vector<Variable> privateVarible, protectedVariable, publicVariable;
    vector<Subroutine> privateSubroutine, protectedSubroutine, publicSubroutine;
    vector<Subroutine> constructor;
public:
    int getWidth();
    void addVaribaleToPrivateCTX(Variable localVar);
    void addVaribaleToProtectedCTX(Variable localVar);
    void addVaribaleToPublicCTX(Variable publicVar);
    void addSubroutineToPrivateCTX(Subroutine localSub);
    void addSubroutineToProtectedCTX(Subroutine localSub);
    void addSubroutineToPublicCTX(Subroutine publicSub);
    void addSubroutineToConstructor(Subroutine publicSub);

    Subroutine global;
    string getParentName();
    bool hasStart();
    bool hasConstructor();
    bool getVariableByName(string name, Variable &localVar, int access);
    bool setVariableByName(Variable &localVar);
    bool getSubroutineByName(string name, Subroutine &localSub, vector<Variable *> argsType, int access);
    bool getSubroutineByName(string name, Subroutine &localSub, int access);
    bool setSubroutineByName(Subroutine &localSub);
    string getTypeName();
    void setTypeName(string typeName);
    void setParentName(string parentName);
    void callConstructor(vector<Variable> constructorVars);
    string getType();
    void setType(string type);
    string ToString();
};

#endif // TYPE_H
