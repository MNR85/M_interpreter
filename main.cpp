#include <iostream>
#include "antlr4-runtime.h"
#include "LULULexer.h"
#include "LULUParser.h"
#include "LULUBaseListener.h"
#include "ANTLRInputStream.h"
#include "CommonTokenStream.h"
#include "ParseTree.h"
#include "mlululistener.h"
#include "ANTLRErrorListener.h"
#include "antlrerrorlistenerm.h"

using namespace std;
using namespace antlr4;

void compiler(string filename){
    mLuluListener listener;

    std::ifstream stream;
    stream.open(filename);
    AntlrErrorListenerM syntaxErrorListener;
    AntlrErrorListenerM lexerErrorListener;
    ANTLRInputStream input = ANTLRInputStream(stream);
    LULULexer* lexer = new LULULexer(&input);
    CommonTokenStream* token = new CommonTokenStream((TokenSource*)lexer);
    LULUParser* parser = new LULUParser(token);
//    cout<<"\033[31m Lexer error listener: \033[0m"<<endl;
    lexer->addErrorListener(&syntaxErrorListener);
//    cout<<"\033[31m Parser error listener: \033[0m"<<endl;
    parser->addErrorListener(&syntaxErrorListener);
    tree::ParseTree *mtree = parser->program();
//    auto lexerErrorList = lexerErrorListener.getSyntaxErrors();
//    auto syntaxErrorList = syntaxErrorListener.getSyntaxErrors();

    try {
        tree::ParseTreeWalker::DEFAULT.walk(&listener,mtree); // start of msixrlistener.cpp => constructor => enterModuleRoutines
    } catch (const std::exception& ex) {
        cout<<"Error: "<<ex.what()<<endl;
    } catch (const std::string& ex) {
        cout<<"Error: "<<ex.c_str()<<endl;
    } catch (...) {
        cout<<"~Error"<<endl;
    }
}

int main()
{
    cout << "Starting compile!" << endl;
    compiler("/home/ali/maryam_antlr/sample.txt");
    return 0;
}

