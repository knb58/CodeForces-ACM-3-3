#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

vector<int> primeDiv(int);

int main(){
    int n;
    cin>>n;

    vector<int> c, primes;

    c.push_back(1); // index 0 is #2 which is color 1

    int colors=1;
    int maxColors=1;
    int highest=1;

    for(int i=2; i<=n; i++){
        colors=0; maxColors=0; //reset the colors;
        primes=primeDiv(i+1); //get primary divisors of the number.
        for(int j=0; j<primes.size(); j++){
            int a=primes[j]; //get prime

            if(a!=i+1){colors=c[a-2] +1;} //get the highest color number
            else {colors=1;}

            if(colors>maxColors){maxColors=colors;}
        }
        if(maxColors>highest){highest=maxColors;}
        c.push_back(maxColors);
    }

    cout<<highest<<endl;
    for(int i=0; i<c.size(); i++){
        if(i==0){cout<<c[i];}
        else{cout<<" "<<c[i];}
    }

    return 0;
}

vector<int> primeDiv(int p){
    vector<int> primes;
    while(p%2==0){
            p=p/2;
            primes.push_back(2);
        }
    for(int i=3; i<=sqrt(p); i+=2){
        while(p%i==0){
            p=p/i;
            primes.push_back(i);
        }
    }
    if(p>2){primes.push_back(p);}

    return primes;
}

