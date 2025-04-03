#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    
    cout<<"Enter your Word:";
    cin>>a;
    
    if (a== "PASCALINE"){
        cout<<"MANUALLY CALCULATED OPERATING MACHINE";
    }else if (a== "PC"){
    	cout<<"PERSONAL COMPUTER";
    }else if (a== "NAPIER'S_BONE "){
    	cout<<"9 DIFFERENT IVORY STRIPS";
    }else if (a== "SUPERCOMPUTER"){
    	cout<<"THE MOST POWERFUL COMPUTERS";
    }else if (a== "DIFFERENTIAL_ANALYZER"){
    	cout<<"ELECTRONIC_COMPUTER";
    }else if (a=="ABACUS"){
    	cout<<"BEADS WERE MOVED";
    }else if (a== "TABULATOR_MACHINE"){
        cout<<"TABULATING MACHINE";
    }else if (a== "MARK_1" ){
        cout<<"FIRST PROGRAMMABLE DIGITAL COMPUTER";
    }else if(a== "STEPPED_RECKONER"){
        cout<<"MADE OF FLUTED DRUMS";
    }else if (a== "ANALYTICAL_ENGINE"){
        cout<<"CHEMICAL CALCULATOR";
    }else{
        cout<<"No word is found";
    }
    
   return 0;
}


