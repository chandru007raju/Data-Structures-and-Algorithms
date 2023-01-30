


// //  Infix to postfix expression

// // https://www.youtube.com/watch?v=vq-nUF0G4fI&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=21


//    Some things wrong with this....

// // ***********************************************

// // precedence function() for stack and input;
// #include<iostream>
// #include<cstring>

// using namespace std;

// int F(char symbol){
//     switch(symbol){
//         case'+':
//         case'-':return 2;
//         case'*':
//         case'/':return 4;
//         case'$':
//         case'^':return 5;
//         case'(':return 0;
//         case'#':return -1;
//         default:return 8;
//     }
    
// }

// int G(char symbol){
//     switch(symbol){
//         case'+':
//         case'-':return 1;
//         case'*':
//         case'/':return 3;
//         case'$':
//         case'^':return 6;
//         case'(':return 9;
//         case')':return 0;
//         default:return 7;
//     }
// }

// void prefix_postfix(char infix[], char postfix[]){

//  char s[30],symbol; //stack

//  int top= -1; //stack empty
//  s[++top]= '#'; //initialize top of stack to #
//  int j=0; //points to first cahr of postfix expression

// for(int i=0;i<strlen(infix);i++){
//     symbol = infix[i];
//     while(F(s[top])> G(symbol)){
//         postfix[j] = s[top--];
//         j++;
//     }
//     if(F(s[top])!= G(symbol)){
//         s[top++] = symbol;
//     }
//     else
//     top--;
// }
// while(s[top]!= '#'){
//     postfix[j++] = s[top--];
// }
// postfix[j] = '\0';

// }

// int main(){
//     char infix[20];
//     char postfix[20];
//     // char result[20];
//     cout<<" enter a valid infix exp : "<<endl;
//     cin>> infix;

//     prefix_postfix(infix, postfix);

//     cout<<" the postfix exp is : ";
//     cout<< postfix <<endl;

// }

