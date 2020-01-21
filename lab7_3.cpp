#include<iostream> //status = "ONE-NIGHT-STAND";
#include<string>
using namespace std;

int main(){
    int old, tall, asset;
    string status="";
cout << "How old are you?" << "\n:";
cin >> old;
if (old <= 20){
    cout << "How tall are you?" << "\n:";
    cin >> tall;
    if (tall < 160){
        status = "UNFRIEND";
        cout << status;
    }else if (tall >= 160 and tall < 175){
        status = "FRIEND";
        cout << status;
    }else{
        cout << "How much do you have?(million)" << "\n:";
        cin >> asset;
        if (asset > 69){
            status = "MARRIED";
            cout << status;
        }else{
            status = "ONE-NIGHT-STAND";
            cout << status;
        } 
    }
}else if (old < 30){
    cout << "How much do you have?(million)" << "\n:";
    cin >> asset;
    if (asset > 10){
      status = "BEST FRIEND";
      cout << status;
    }else{
      status = "UNFRIEND";
      cout << status;
    }
}else{
    status = "UNFRIEND";
    cout << status;
}

return 0;
}