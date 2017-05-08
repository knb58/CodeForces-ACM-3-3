#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<string> names;
    string name1, name2;

    cin>>name1>>name2;

    names.push_back(name1);
    names.push_back(name2);

    int days=0;
    cin>>days;

    for(int i=0; i<days; i++){
        string name3;
        cin>>name3;

        if(name3==name1){cin>>name1;}
        else{cin>>name2;}

        names.push_back(name1);
        names.push_back(name2);
    }
    for(int i=0; i<names.size(); i+=2){
        cout<<names[i]<<" "<<names[i+1]<<endl;
    }
    return 0;
}
