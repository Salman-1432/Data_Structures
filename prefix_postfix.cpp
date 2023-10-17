#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<set>
using namespace std;
set<string>oprators={"^","*","/","+","-"};
bool isoperator(string &token,set<string>& operators)
{
    auto found=operators.find(token);
    if(found!=operators.end())
        return false;
    return true;
}
int prec(string c)
{
    if(c=="^")
        return 3;
    else if(c=="/"||c=="*")
        return 2;
    else if(c=="+"|| c=="-")
        return 1;
    else 
        return -1; 

}
int pre(char c)
{
    if(c=='^')
        return 3;
    else if(c=='/'||c=='*')
        return 2;
    else if (c=='+'||c=='-')
        return 1;
    else 
        return -1;
}
class expression
{
    protected:
    string exp;
    public:
    expression(){};
    expression(const string  exprstring)
    {
        exp=exprstring;
    }
    friend ostream & operator<<(ostream &,const expression&);
    friend istream & operator>>(istream &,const expression&); 
};
ostream & operator<<(ostream & out,const expression& expr)
{
    out<<expr.exp;
    return out;
}
istream & operator>>(istream&in,const expression & expr)
{
    in>>expr.exp;
    return in;
}
class Infix;
class Postfix;
class prefix:public expression
{
    public:
    prefix(const string str);
    prefix(const prefix&);
    Infix toInfix();
    Postfix toPostfix();

};
class Infix:public expression{
    public:
    Infix(const string str):expression(str){}
    Infix(const Infix &infx)
    {
        exp=infx.exp;
    }
    prefix toPrefix();
    Postfix toPostfix();
};
class Postfix:public expression
{
    public:
    Postfix(string str):expression(str){}
    Postfix(const Postfix&);
    prefix toptefix();
    Infix toInfix();
};
prefix::prefix(const string str):expression(str){}
Infix prefix::toInfix()
{
    // 1.reverse the prefix expression
    string pExpr=exp;
    reverse(pExpr.begin(),pExpr.end());
    string tExpr;
    stack<string>stk;
    for(auto op:pExpr)
    {
        string token(1,op);
        if(isoperator(token,operator))
        {
            stk.push(token);
        }
        else
        {
            tExpr="("+stk.top();  stk.pop();
            tExpr+=token+stk.top()+")";stk.pop();
            stk.push(tExpr);
        }
    }
    tExpr=stk.top();stk.pop();
    return Infix(tExpr);
}
