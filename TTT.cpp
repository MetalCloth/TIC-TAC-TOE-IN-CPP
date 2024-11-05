#include<iostream>
using namespace std;
bool endgame(char arr[][3]){
    int j=1;
    for(int i=0;i<2;i++){
        if(arr[0][i]==arr[0][i+1]){
            j++;
        }
    }
    if(j==3){
        return true;
    }
    j=1;
    for(int i=0;i<2;i++){
        if(arr[i][0]==arr[i+1][0]){
            j++;
        }
    }
    if(j==3){
        return true;
    }
    
    j=1;
    for(int i=0;i<2;i++){
        if(arr[i][2]==arr[i+1][2]){
            j++;
        }
    }
    if(j==3){
        return true;
    }
    j=1;

    for(int i=0;i<2;i++){
        if(arr[2][i]==arr[2][i+1]){
            j++;
        }
    }
    if(j==3){
        return true;
    }

    if(arr[0][1]==arr[1][1]==arr[2][1]){
        return true;
    }

    if(arr[1][0]==arr[1][1]==arr[1][2]){
        return true;
    }
    //diagonal ki baari
  
    if(arr[0][0]==arr[1][1]==arr[2][2]){
        return true;
    }
    if(arr[2][0]==arr[1][1]==arr[0][2]){
        return true;
    }
    return false;
}
void show(char arr[][3]){
    for(int i=0;i<3;i++){
        cout<<"     |     |     |"<<endl;
        for(int j=0;j<3;j++){
            cout<<"  "<<arr[i][j]<<"  |";
        }
        cout<<endl;
        if(i<2){
        cout<<"_____|_____|_____|_____"<<endl;
        }
        else{
            cout<<"     |     |     |"<<endl;
        }
    }
}
bool completed(bool hidden[][3]){
    int c=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(hidden[i][j]==false){
                c++;
            }
        }
    }
    if(c==9){
        return true;
    }
    return false;
}
void adding(char arr[][3],bool &zero,bool hidden[][3]){
    int m;
    cout<<"ENTER NUMBER YOU WANT TO REPLACE";
    cin>>m;
    switch(m){
        case 1:
        if(hidden[0][0]==true){
            if(zero){
                arr[0][0]='0';
            }
            else{
                arr[0][0]='X';
            }
            hidden[0][0]=false;
            zero=!zero;
        }
        else{
            cout<<"CHOSE ANOTHER ONE"<<endl;
        }

        break;
        case 2:
        if(hidden[0][1]==true){
            if(zero){
                arr[0][1]='0';
            }
            else{
                arr[0][1]='X';
            }
            hidden[0][1]=false;
            zero=!zero;
        }
        else{
            cout<<"CHOSE ANOTHER ONE"<<endl;
        }
        break;
        case 3:
        if(hidden[0][2]==true){
            if(zero){
                arr[0][2]='0';
            }
            else{
                arr[0][2]='X';
            }
            hidden[0][2]=false;
            zero=!zero;
        }
        else{
            cout<<"CHOSE ANOTHER ONE"<<endl;
        }
        break;
        case 4:
        if(hidden[1][0]==true){
            if(zero){
                arr[1][0]='0';
            }
            else{
                arr[1][0]='X';
            }
            hidden[1][0]=false;
            zero=!zero;
        }
        else{
            cout<<"CHOSE ANOTHER ONE"<<endl;
        }
        break;
        case 5:
        if(hidden[1][1]==true){
            if(zero){
                arr[1][1]='0';
            }
            else{
                arr[1][1]='X';
            }
            hidden[1][1]=false;
            zero=!zero;
        }
        else{
            cout<<"CHOSE ANOTHER ONE"<<endl;
        }
        break;
        case 6:
        if(hidden[1][2]==true){
            if(zero){
                arr[1][2]='0';
            }
            else{
                arr[1][2]='X';
            }
            hidden[1][2]=false;
            zero=!zero;
        }
        else{
            cout<<"CHOSE ANOTHER ONE"<<endl;
        }
        break;
        case 7:
        if(hidden[2][0]==true){
            if(zero){
                arr[2][0]='0';
            }
            else{
                arr[2][0]='X';
            }
            hidden[2][0]=false;
            zero=!zero;
        }
        else{
            cout<<"CHOSE ANOTHER ONE"<<endl;
        }
        break;
        case 8:
        if(hidden[2][1]==true){
            if(zero){
                arr[2][1]='0';
            }
            else{
                arr[2][1]='X';
            }
            hidden[2][1]=false;
            zero=!zero;
        }
        else{
            cout<<"CHOSE ANOTHER ONE"<<endl;
        }
        break;
        case 9:
        if(hidden[2][2]==true){
            if(zero){
                arr[2][2]='0';
            }
            else{
                arr[2][2]='X';
            }
            hidden[2][2]=false;
            zero=!zero;
        }
        else{
            cout<<"CHOSE ANOTHER ONE"<<endl;
        }
        break;
        default:
        cout<<"ENTER CORRECT NUMBER"<<endl;
        break;
    }
}
int main(){
    cout<<"----->WELCOME TO ZERO KATAA<-----"<<endl;
    cout<<endl;
    char l='Y';
    while(l=='Y'){
    char arr[3][3];
    bool hidden[3][3];
    int x=49;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=x;
            x++;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            hidden[i][j]=true;
        }
    }
    show(arr);
    bool zero=true;
    char b='Y';
    while(b=='Y'){
    adding(arr,zero,hidden);
    show(arr);
    if(endgame(arr)){
        if(zero){
            cout<<"X WON THE GAME!!!"<<endl;
        }
        else{
            cout<<"0 WON THE GAME!!!"<<endl;
        }
        b='N';
    }
    if(completed(hidden) && !endgame(arr)){
        cout<<"DRAW"<<endl;
        b='N';
    }
    }
    cout<<"WANNA START NEW GAME?(Y/N)";
    cin>>l;}
    cout<<"BYE BYE"<<endl;
}