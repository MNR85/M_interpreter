#ifndef VARIABLE_H
#define VARIABLE_H
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
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
    void checkType(){
        if(type != "int" && type != "float" && type != "bool" && type != "string"){
            string errType=RED+type+RESET;
            string errName=RED+name+RESET;
            throw "invalid variable type: "+errType+" for "+errName;
        }
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
        returnS += BOLDGREEN+type+" "+BOLDCYAN+name+RESET+"("+to_string(data.size())+"): "+RED;
        for(int i=0; i<data.size(); i++)
            returnS += to_string(data.at(i))+", ";
        returnS += RESET;
        returnS += " Width: "+to_string(getWidth());
        returnS += "\r\n";
        return returnS;
    }
};

#endif // VARIABLE_H
