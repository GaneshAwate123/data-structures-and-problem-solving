#include<iostream>
#include<stack>
using namespace std;

string InfixTOPostfix(int infix,stack<char> s){
    string postfix;

    for(int i=0;i<infix.length();i++){
        if(infix[i]>="a" && infix[i]<="z" || infix[i]>="A" && infix[i]<="Z" ){
            postfix+=infix[i];
        }
        else if(infix[i] == "("){
            s.push();
        }
        else if(infix[i] == ")"){
            while((s.top()=="(") && (!s.empty())){
                
            }
        }
    }
}

int main(){
    string infix,postfix;
    cout<<"Enter an infix expression :"<<endl;
    cin>>infix;
    stack<char> stack;
    cout<<"Infix expression :"<<infix<<endl;
    postfix = InfixToPostfix(infix,stack);

    cout<<endl<<"Postfix expression :"<<postfix;    



    return 0;
}