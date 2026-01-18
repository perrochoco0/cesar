#include <iostream>
#include <string>

using namespace std;


int main(){
    string token = "gtsnyf";
    string final = "";
    unsigned int k;


    cout<<"Ingresa el texto: ";
    cin>>token;
    cout<<"Ingresa el k: ";
    cin>>k;
    
    
    for(int i = 0; i < token.length(); i++){ 
        int pos = token[i] - 'a';
        int new_pos = (pos + k)%26;

        final += (char)(new_pos) + 'a';
    }

    cout<<final<<endl;


    return 0;
}