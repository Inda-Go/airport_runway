

#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

//so the fuctions for this class is just getting input from the file command_this.txt

void pause(int dur){
    int temp = time(NULL) + dur;
    while(temp > time(NULL));
}

string getFileCommand(string fileName){
    string temp;
    ifstream myfile(fileName);
    //myfile.open();
    if (myfile.is_open()){
        while(!myfile.eof()){       //you need a not here or it wont work
            //cout << "Here!";
            getline(myfile,temp);
            //cout << line << endl;
        }
        myfile.close();
        return temp;
    }else{
        cout << "Unable to open file" << endl;
        return temp;
    }
}

void clearFile(string fileName){
    ofstream myfile(fileName);
    if(myfile.is_open()){
        for(unsigned int i = 0; i < 1; i++){
            myfile << "";
        }
        myfile.close();
    } else {
        cout << "Unable to open file" << endl;
    }
}

/*
int main(){
    string temp;
    for(;;){
        temp = getFileCommand("command_here.txt");
        cout << temp << endl;
        clearFile("command_here.txt");
        pause(1);
    }
    
    
    return 0;
}
*/

