#include<iostream>
#include<vector>

using namespace std;

bool inVec(int,vector<int>);

int main(){
    int c;
    cin>>c;

    vector<int> n;

    int candies=c;
    int number=1;
    int counter=0;

    do{
        if(candies-number==0){
                candies=0;
                n.push_back(number);
        }
        else if(candies-number>0 && candies-number!=number){
            if(!inVec(number,n) && !inVec((candies-number), n)){
                candies-=number;
                n.push_back(number);
            }
        }

        number++;
    }while(candies>0);


    cout<<n.size()<<endl;
    for(int i=0; i<n.size(); i++){
        if(i==n.size()){cout<<n[i];}
        else{cout<<n[i]<<" ";}
    }

    return 0;
}


bool inVec(int a, vector<int> n){
    for(int i=0; i<n.size(); i++){
        if(a==n[i]){return true;}
    }
    return false;
}













