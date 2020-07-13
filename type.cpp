#include "type.h"
bool icompare_pred1(unsigned char a, unsigned char b)
{
    return std::tolower(a) == std::tolower(b);
}

bool stringCompare1(std::string const& a, std::string const& b)
{
    if (a.length()==b.length()) {
        return std::equal(b.begin(), b.end(),
                          a.begin(), icompare_pred1);
    }
    else {
        return false;
    }
}
Type::Type()
{

}

int Type::getWidth()
{
    int size=20;
    for(int i=0; i<privateVarible.size(); i++){
        size+= privateVarible[i].getWidth();
    }
    for(int i=0; i<protectedVariable.size(); i++){
        size+= protectedVariable[i].getWidth();
    }
    for(int i=0; i<publicVariable.size(); i++){
        size+= publicVariable[i].getWidth();
    }

    for(int i=0; i<privateSubroutine.size(); i++){
        size+= privateSubroutine[i].getWidth();
    }
    for(int i=0; i<protectedSubroutine.size(); i++){
        size+= protectedSubroutine[i].getWidth();
    }
    for(int i=0; i<publicSubroutine.size(); i++){
        size+= publicSubroutine[i].getWidth();
    }
    for(int i=0; i<constructor.size(); i++){
        size+= constructor[i].getWidth();
    }
    return size;

}

void Type::addVaribaleToPrivateCTX(Variable localVar)
{
    privateVarible.push_back(localVar);
}

void Type::addVaribaleToProtectedCTX(Variable localVar)
{
    protectedVariable.push_back(localVar);
}

void Type::addVaribaleToPublicCTX(Variable publicVar)
{
    publicVariable.push_back(publicVar);
}

void Type::addSubroutineToPrivateCTX(Subroutine localSub)
{
    privateSubroutine.push_back(localSub);
}

void Type::addSubroutineToProtectedCTX(Subroutine localSub)
{
    protectedSubroutine.push_back(localSub);

}

void Type::addSubroutineToPublicCTX(Subroutine publicSub)
{
    publicSubroutine.push_back(publicSub);

}

void Type::addSubroutineToConstructor(Subroutine publicSub)
{
    constructor.push_back(publicSub);
}

string Type::getParentName()
{
    return _parent;
}

bool Type::hasStart()
{
    bool _hasStart=false;
    for(int i=0; i<publicSubroutine.size(); i++){
        if(stringCompare1(publicSubroutine[i].getSubRoutineName(), "start")){

            _hasStart=true;
            break;
        }
    }
    return _hasStart;
}

bool Type::hasConstructor()
{
    return !constructor.empty();
}

bool Type::getVariableByName(string name, Variable &localVar, int access)
{

    for(int i=0; i<privateVarible.size(); i++){
        if(privateVarible[i].name== name){
            localVar = privateVarible[i];
            return true;
        }
    }
    for(int i=0; i<protectedVariable.size(); i++){
        if(protectedVariable[i].name== name){
            localVar = protectedVariable[i];
            return true;
        }
    }
    for(int i=0; i<publicVariable.size(); i++){
        if(publicVariable[i].name== name){
            localVar = publicVariable[i];
            return true;
        }
    }

    return false;


}

bool Type::setVariableByName(Variable &localVar)
{
    string name = localVar.name;
    for(int i=0; i<privateVarible.size(); i++){
        if(privateVarible[i].name== name){
            privateVarible.at(i)=localVar;
            return true;
        }
    }
    for(int i=0; i<protectedVariable.size(); i++){
        if(protectedVariable[i].name== name){
            protectedVariable.at(i)=localVar;
            return true;
        }
    }
    for(int i=0; i<publicVariable.size(); i++){
        if(publicVariable[i].name== name){
            publicVariable.at(i)=localVar;
            return true;
        }
    }
    return false;
}

bool Type::getSubroutineByName(string name, Subroutine &localSub, int access)
{
    for(int i=0; i<privateSubroutine.size(); i++){
        if(privateSubroutine[i].getSubRoutineName()== name){
            localSub = privateSubroutine[i];
            return true;
        }
    }
    for(int i=0; i<protectedSubroutine.size(); i++){
        if(protectedSubroutine[i].getSubRoutineName()== name){
            localSub = protectedSubroutine[i];
            return true;
        }
    }
    for(int i=0; i<publicSubroutine.size(); i++){
        if(publicSubroutine[i].getSubRoutineName()== name){
            localSub = publicSubroutine[i];
            return true;
        }
    }
    return false;
}

bool Type::setSubroutineByName(Subroutine &localSub)
{
    string name = localSub.getSubRoutineName();
    for(int i=0; i<privateSubroutine.size(); i++){
        if(privateSubroutine[i].getSubRoutineName()== name){
            privateSubroutine.at(i)=localSub;
            return true;
        }
    }
    for(int i=0; i<protectedSubroutine.size(); i++){
        if(protectedSubroutine[i].getSubRoutineName()== name){
            protectedSubroutine.at(i)=localSub;
            return true;
        }
    }
    for(int i=0; i<publicSubroutine.size(); i++){
        if(publicSubroutine[i].getSubRoutineName()== name){
            publicSubroutine.at(i)=localSub;
            return true;
        }
    }
    return false;
}

//bool Type::getSubroutineByName(string name, Subroutine &localSub, string argsType, int access)
//{

//}

string Type::getTypeName()
{
    return _type_name;
}

void Type::setTypeName(string typeName)
{
    _type_name = typeName;
}

void Type::setParentName(string parentName)
{
    _parent = parentName;
}

void Type::callConstructor(vector<Variable> constructorVars)
{

}

string Type::getType()
{
    return _type;
}

void Type::setType(string type)
{
    _type = type;
}

string Type::ToString()
{
    string returnS = _type_name + " Width: "+to_string(getWidth())+"\r\n";
    string empty="";
    returnS += BOLDBLUE+empty+"\tprivateVarible"+RESET+"\r\n";
    for(int i=0; i<privateVarible.size(); i++){
        returnS+= "\t##"+to_string(i)+": "+privateVarible[i].ToString();
    }
    int p1= privateVarible.size();
    returnS += BOLDBLUE+empty+"\tprotectedVariable"+RESET+"\r\n";
    for(int i=0; i<protectedVariable.size(); i++){
        returnS+= "\t##"+to_string(i+p1)+": "+protectedVariable[i].ToString();
    }
    int p2 = protectedVariable.size();
    returnS += BOLDBLUE+empty+"\tpublicVariable"+RESET+"\r\n";
    for(int i=0; i<publicVariable.size(); i++){
        returnS+= "\t##"+to_string(i+p1+p2)+": "+publicVariable[i].ToString();
    }
    returnS += BOLDYELLOW+empty+"\tprivateSubroutine"+RESET+"\r\n";
    for(int i=0; i<privateSubroutine.size(); i++){
        returnS+= "\t##"+to_string(i)+": "+privateSubroutine[i].ToString();
    }
    int s1=privateSubroutine.size();
    returnS += BOLDYELLOW+empty+"\tprotectedSubroutine"+RESET+"\r\n";
    for(int i=0; i<protectedSubroutine.size(); i++){
        returnS+= "\t#"+to_string(i+s1)+": "+protectedSubroutine[i].ToString();
    }
    int s2=protectedSubroutine.size();
    returnS += BOLDYELLOW+empty+"\tpublicSubroutine"+RESET+"\r\n";
    for(int i=0; i<publicSubroutine.size(); i++){
        returnS+= "\t##"+to_string(i+s1+s2)+": "+publicSubroutine[i].ToString();
    }
    int s3=publicSubroutine.size();
    returnS += BOLDYELLOW+empty+"\tconstructor"+RESET+"\r\n";
    for(int i=0; i<constructor.size(); i++){
        returnS+= "\t##"+to_string(i+s1+s2+s3)+": "+constructor[i].ToString();
    }
    return returnS;
}
