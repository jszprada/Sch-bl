#include <iostream>
using namespace std;



int main(){
    
    int wybor;
    cin>>wybor;
    
    
    switch(wybor){
        
        case 1:{
    const int size=6;
    double T[size];
    
    
int i=0;
double sprawdz=0;

while(i<size)
{
   cin>>sprawdz;
   if((sprawdz<=10) && (sprawdz>0)){
       T[i]=sprawdz;
       i++;
   }
}
    cout<<"Resulting array:"<<T[0]<<" "<<" "<<T[1]<<" "<<T[2]<<" "<<T[3]<<" "<<T[4]<<T[5];
    break;
        }
    case 2:{
        
        const int size=5;
        int T1[size];
        int T2[size];
        
        int wpr;
       int i=0; 
       while(i<size){
            cin>>wpr;
            if(!wpr){
                cin.clear();
                cin.sync();
            }
            else{
                T1[i]=wpr;
                i++;
            }
       }
       int j=0;
           while(j<size){
            cin>>wpr;
            if(!wpr){
                cin.clear();
                cin.sync();
            }
            else{
                T2[j]=wpr;
                j++;
            }
       }
     for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
        {
            
        }
     }
       break;
        }
        
    case 3:{
        string liczba;
        cin>>liczba;
        int wynik=0;
        bool blad=0;
     
        for(int i=0;i<liczba.length();i++){
            if(liczba[i]=='I' && liczba[i+1]=='V'){
                wynik+=4;
                i++;
            }
            else if(liczba[i]=='I' && liczba[i+1]=='X'){
                wynik+=9;
                i++;
            }
            else if(liczba[i]=='X' && liczba[i+1]=='L'){
                wynik+=40;
                i++;
            }
            else if(liczba[i]=='X' && liczba[i+1]=='C'){
                wynik+=90;
                i++;
            }
            else if(liczba[i]=='C' && liczba[i+1]=='D'){
                wynik+=400;
                i++;
            }
            else if(liczba[i]=='C' && liczba[i+1]=='M'){
                wynik+=900;
                i++;
            }
            else if(liczba[i]=='I'){
                wynik+=1;
            }
            else if(liczba[i]=='V'){
                wynik+=5;
            }
            else if(liczba[i]=='X'){
                wynik+=10;
            }
            else if(liczba[i]=='L'){
                wynik+=50;
            }
            else if(liczba[i]=='C'){
                wynik+=100;
            }
            else if(liczba[i]=='D'){
                wynik+=500;
            }
            else if(liczba[i]=='M'){
                wynik+=1000;
            }
            else{
                blad=1;
                break;
            }
          
          
        }
        if(blad==0){
        cout<<"Converted "<<liczba<<" to "<<wynik<<".";
        }
        else if(blad==1)
        {
            cout<<"Wrong input data.";
        }
        
        
        break;
    }    
        default:{
            cout<<"Wrong task number.";
            break;
        }
        
        
        
    }
    
    
    
}