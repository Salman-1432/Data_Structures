#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <set>
using namespace std;

 set< string>operators = {"^","*","/","+","-"};
bool isOperator( string& token,  set< string>& operators)
{
	auto found = operators.find(token);  // is token in the set of operators?
	if (found != operators.end()) // why?
		return false;   // if token is an operator say No
	return true;      // if not say Yes
}
int prec( string c)
{
    if (c == "^")
        return 3;
    else if (c == "/" || c == "*")
        return 2;
    else if (c == "+" || c == "-")
        return 1;
    else
        return -1;
}
int pre(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
class Expression {
protected:
     string expr;
public:
	Expression() {}
    Expression(const  string exprString) {
        expr = exprString;
    }
    friend  ostream& operator<<( ostream&, const Expression&);
    friend  istream& operator>>( istream&, const Expression&);
};

 ostream& operator<<( ostream& ost, const Expression& exp) {
    ost << exp.expr ;
    return ost;
}
 istream& operator>>( istream&in, const Expression& exp)
{
    in>>exp.expr;
    return in;
}
class Infix;
class Postfix;

class Prefix : public Expression
{
public:
    //Prefix(){}
    Prefix(const  string str);
    Prefix(const Prefix&);
    Infix toInfix();
    Postfix toPostfix();
};

class Infix : public Expression
{
public:
    //Infix(){}
    Infix(const  string str) : Expression (str){ }
	Infix(const Infix& infx) {
    	expr = infx.expr;
	}
    Prefix toPrefix();
    Postfix toPostfix();
};

class Postfix : public Expression
{
public:
   // Postfix(){}
    Postfix( string str): Expression(str){ }
    Postfix(const Postfix&);
    Prefix toPrefix();
    Infix toInfix();
};

Prefix::Prefix(const  string str): Expression(str){}
Infix Prefix::toInfix() {
  	// 1. reverse the Prefix Expression
	 string pExpr = expr;  // save the expression
     reverse(pExpr.begin(), pExpr.end());

	// now lets convert the reversed (Prefix) expression to Infix expression
     string tExpr;   // temporary variable to construct Infix expression
    // a string stack to hold operator and/or partial/full (infix) expressions
	 stack< string> stk;
    for (auto op : pExpr) {   // left to right scan of each character
    	 string token(1,op);   // *op is a char type; token is string
    	if(isOperator(token, operators)) {   // token is an oprator
    		stk.push(token);
		} else  {   // form a partial (infix) expression
			tExpr  = "(" + stk.top();         stk.pop(); // as in "(A". why pop?
			tExpr += token + stk.top() + ")"; stk.pop(); // as in "(A+B)"
			stk.push(tExpr);   // now push the partial (infix) expression
		}
	}
	tExpr = stk.top(); stk.pop();   // we have the infix expression as a string
	return Infix(tExpr);   // convert tExpr (string) to Infix type and return
}
Prefix Postfix::toPrefix()
{
    // 1. reverse the Prefix Expression
	 string pExpr = expr;  // save the expression
	// now lets convert the reversed (Prefix) expression to Infix expression
     string tExpr;   // temporary variable to construct Infix expression
    // a string stack to hold operator and/or partial/full (infix) expressions
	 stack< string> stk;
    for (auto op : pExpr) {   // left to right scan of each character
    	 string token(1,op);   // *op is a char type; token is string
    	if(isOperator(token, operators)) {   // token is an oprator
    		stk.push(token);
		}
		else{
             string tExpr1=stk.top(); stk.pop();
             string tExpr2=stk.top(); stk.pop();
            tExpr=token+tExpr2+tExpr1;
            stk.push(tExpr);
		}
    }
		tExpr=stk.top(); stk.pop();
		return Prefix(tExpr);
}
Postfix Prefix::toPostfix()
{
     string pExpr=expr;
     reverse(pExpr.begin(), pExpr.end());
     string tExpr;
     stack< string> stk;
    for(auto op:pExpr)
    {
         string token(1,op);
        if(isOperator(token, operators)) {   // token is an oprator
    		stk.push(token);
		}
		else{
            tExpr=stk.top();  stk.pop();
            tExpr+=stk.top()+token; stk.pop();
            stk.push(tExpr);
		}
    }
		tExpr = stk.top(); stk.pop();   // we have the infix expression as a string
	return Postfix(tExpr);
}
Postfix Infix::toPostfix()
{
      string pExpr=expr;
       string tExpr;
     stack< string> stk;
    for(auto op:pExpr)
    {
         string token(1,op);// token is an oprator
        if ((token >= "a" && token <= "z") || (token >= "A" && token <= "Z")|| (token >= "0" && token <= "9"))
            tExpr+=token;
        else if (token == "(")
        {
            stk.push("(");
        }
             else if (token == ")") {
            while (stk.top() != "(") {
                tExpr += stk.top();
                stk.pop();
            }
            stk.pop();
        }
          else{
              // cout<<stk.top()<< endl;
            while (!stk.empty()&& pre(op) <= prec(stk.top())) {
                tExpr += stk.top();
                stk.pop();
            }
            stk.push(token);
          }
        }
     while (!stk.empty()) {
        tExpr += stk.top();
        stk.pop();
    }
    return Postfix(tExpr);
    }
Prefix Infix::toPrefix()
{
     string pExpr=expr;
    Infix in(pExpr);
    Postfix i = in.toPostfix();
    Prefix p=i.toPrefix();
    return p;
}
Infix Postfix::toInfix()
{
     string pExpr = expr;  // save the expression
   // now lets convert the reversed (Prefix) expression to Infix expression
     string tExpr;   // temporary variable to construct Infix expression
    // a string stack to hold operator and/or partial/full (infix) expressions
	 stack< string> stk;
    for (auto op : pExpr) {   // left to right scan of each character
    	 string token(1,op);   // *op is a char type; token is string
    	if(isOperator(token, operators)) {   // token is an oprator
    		stk.push(token);
		}
		else {
             string tExpr1  = stk.top()+")";
             stk.pop();
             string tExpr2 =  "("+stk.top() ;
             stk.pop();
            tExpr=tExpr2+token+tExpr1;
            stk.push(tExpr);
		}
    }
		tExpr = stk.top(); stk.pop();
    // we have the infix expression as a string
	return Infix(tExpr);
}
int main()
{
    string str;
    int ch;
     cout<<"Type Of expression You Want to enter : \n";
    
    while(1)
    {
         cout<<"\nPress 1 for Postfix \nPress 2 for Prefix \nPress 3 for Infix \nPress 4 for Exit \n: ";
       cin>>ch;
       switch(ch)
       {
          case 1 :
               {
               cout<<"Enter Your Expression : ";
               cin>>str;
               Postfix Po(str);
               cout<<"Equivalent Infix  "<<Po.toInfix()<< endl;
               cout<<"Equivalent Prefix  "<<Po.toPrefix()<< endl;
               break;
               }

          case 2 :
               {
               cout<<"Enter Your Expression : ";
               cin>>str;
               Prefix Pre(str);
               cout<<"Equivalent Postfix  "<<Pre.toPostfix()<< endl;
               cout<<"Equivalent Infix  "<<Pre.toInfix()<< endl;
               break;
               }

          case 3 :
               {
               cout<<"Enter Your Expression : ";
               cin>>str;
               Infix In(str);
               cout<<"Equivalent Postfix "<<In.toPostfix()<< endl;
               cout<<"Equivalent Prefix "<<In.toPrefix()<< endl;
               break;
               }

          case 4 :
               exit(0);
       }
    }
}
