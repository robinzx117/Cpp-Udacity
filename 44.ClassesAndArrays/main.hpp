/*The header file for main.cpp*/

#include<iostream>
#include "Dog.cpp"

void printRoster(Dog roster[], int size);

void printRoster(Dog roster[], int size){
    for(int i=0; i<size; i++){
        roster[i].printInfo();
        cout<<"\n";
    }
}
