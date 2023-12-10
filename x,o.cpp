#include <iostream>

using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'},player='x';
void printmatrix(){
    system("cls");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<matrix[i][j]<<"  ";
        cout <<endl;
    }
}
void play(){
    char pos;
    cout<<"player "<<player<<" please, choose your position \n";
    cin>>pos;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j]==pos)
                        matrix[i][j]=player;
        }
    }
    if (player=='x')
        player='o';
    else
        player='x';
}
char whowin(){
    int xc=0,oc=0,counter=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(matrix[i][j]!='x'&&matrix[i][j]!='o')
            counter++;
        if(matrix[i][j]=='x')
            xc++;
        else if (matrix[i][j]=='o')
            oc++;
        if(xc==3||oc==3){
            return xc>oc?'x':'o';
        }
    }
    xc=0;
    oc=0;
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(matrix[j][i]=='x')
            xc++;
        else if (matrix[j][i]=='o')
            oc++;
        if(xc==3||oc==3){
            return xc>oc?'x':'o';
        }
    }
    xc=0;
    oc=0;
}
    if(matrix[0][0]=='x'&&matrix[1][1]=='x'&&matrix[2][2]=='x')
        return 'x';
    else if(matrix[0][0]=='o'&&matrix[1][1]=='o'&&matrix[2][2]=='o')
        return 'o';
    else if(matrix[0][2]=='x'&&matrix[1][1]=='x'&&matrix[2][0]=='x')
        return 'x';
    else if(matrix[0][2]=='o'&&matrix[1][1]=='o'&&matrix[2][0]=='o')
        return 'o';
    if (counter==0)
        return 'z';
    return '.';
}
int main()
{
    while (whowin()=='.'){
        printmatrix();
        play();
    }
    printmatrix();
    if (whowin()=='z')
        cout<<"\n\n no one win !!!!\n\n";
    else
        cout<<"\n\n the winner is player     "<<whowin()<<"      !!!!!!\n\n";
    return 0;
}
