#include "type.h"

Type::Type()
{

}

void Type::setTypeName(string typeName)
{
    _type_name = typeName;
}

void Type::setParentName(string parentName)
{
    _parent = parentName;
}

void Type::setType(string type)
{
    _type = type;
}
