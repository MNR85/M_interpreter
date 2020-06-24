#ifndef VARIABLE_H
#define VARIABLE_H
#include <list>
#include <iterator>
#include <string>
#include <vector>
#include "LULUParser.h"
#include <map>
using namespace::std;

enum PrimitiveType
{
    BOOL = 0,
    CHAR = 1,
    INT = 2,
    FLOAT = 3,
    STRING = 4
};

const string PrimitiveTypeS[]
{
    "BOOL",
    "CHAR",
    "INT",
    "FLOAT",
    "STRING"
};

class Variable
{
//protected:
    //static vector<double> lastData;
    //    LULUParser::TypeContext typeCtx;

public:
    string type;
    string name;
    vector<double> data;
    bool evaluated=false;
    bool isArray=false;

public:
    Variable(){
        //lastData.resize(6);
    }
    int getWidth(){return 4;}
    void CopyTo(Variable *dest){
        dest->name = name;
        dest->type = type;
        dest->evaluated = evaluated;
        for(int i=0; i<data.size(); i++)
            dest->setDataAt(data[i], i);
    }
    vector<double> getData(){
        return data;
    }
    void removeOtherIndex(int idx){
        double d = data.at(idx);
        data.clear();
        data.push_back(d);
    }
    double getDataAt(int idx){
        return data.at(idx);
    }
    void setSize(int size){
        data.resize(size);
    }
    void setData(vector<double> newData){
        for(int i=0; i<newData.size(); i++)
            setDataAt(newData.at(i), i);
        //data = newData;
        evaluated = true;
    }
    void setDataAt(double newData, int idx){
        if(data.size()<idx+1)
            for(int i=data.size(); i<idx+1; i++)
                data.push_back(0);
        data.at(idx) = newData;
        evaluated = true;
    }

    string ToString(){
        string returnS = "";
        returnS += type+" "+name+"("+to_string(data.size())+"): ";
        for(int i=0; i<data.size(); i++)
            returnS += to_string(data.at(i))+", ";
        returnS += " Width: "+to_string(getWidth());
        returnS += "\r\n";
        return returnS;
    }
};

#endif // VARIABLE_H
