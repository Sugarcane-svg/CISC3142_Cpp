#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int populateArray(string filename, string a[], int capacity);
void sort(string a[], int b[], int size);

int main(){
    try{
        const int capacity = 50;
        //const int size =5;
        
        string names[capacity];
        int ids[capacity];
        
        ofstream output("results.data");
        
        int size = populateArray("names.data", names, capacity);
        
     
        
        //populate id array
        for(int i =0; i<size; i++){
            ids[i]=1000+i+1;
        }
        
        //sort names array
        sort(names,ids,size);
        
        //put data in output file
        for(int i =0; i<size; i++){
            output << names[i] << " " << ids[i] << endl;
        }
        
        output.close();
        exit(0);
    }catch(string msg){
        cout << msg <<endl;
        exit(1);
    }
}
int populateArray(string filename, string a[], int capacity){
    try{
        ifstream inputFile(filename.c_str());
        if(!inputFile) throw "*** Exception *** input file "+filename+" not found";
    
        int size=0;
        string name="";
        inputFile >> name;
        while(inputFile){
            if(size == capacity) {
                throw "*** Exception *** array capacity exceeded";
            }
            a[size]=name;
            size++;
            inputFile>>name;
        }
        inputFile.close();
        cout << size << " records processed"<<endl;
        return size;
    }catch(string msg){
        cout <<msg<<endl;
        exit(1);
    }
    
}

void sort(string a[], int b[], int size){
    
    for(int i = 1; i<size; i++){
        int j=i-1;

        string key= a[i];
        int id = b[i];
        
        while(j>=0 && a[j].compare(key)>0){
            a[j+1]=a[j];
            b[j+1]=b[j];
            j--;
        }
        a[j+1]=key;
        b[j+1]=id;
    }
}
