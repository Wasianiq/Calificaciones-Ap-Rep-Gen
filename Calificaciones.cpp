#include <iostream>
using namespace std;

int menu();

float promN();
float promAp();
float promRep();

int main(){
    int opcion;
    float prom;
    do
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
            prom = promN();
            cout<<"El promedio es: "<<prom<<endl;
            break;
        case 2:
            prom = promRep();
            cout<<"El promedio es: "<<prom<<endl;
            break;
        case 3:
            prom = promAp();
            cout<<"El promedio es: "<<prom<<endl;
            break;
        default:
            break;
        }
    } while (opcion != 4);
    
} 


int menu(){
    int opcion;
    cout<<"----- Programa que calcula promedios -----"<<endl;
    cout<<"1. Calcular el promedio de calificaciones Generales"<<endl;
    cout<<"2. Calcular el promedio de calificaciones Reprobatorias"<<endl;
    cout<<"3. Calcular el promedio de calificaciones Aprobatorias"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Ingresa la opcion deseada del menu: ";
    cin>> opcion;
    return opcion;
}


float promN(){
    int calif, numCal, cont;
    float acum = 0, prom;
    cout<<"Ingresa la cantidad de calificaciones a promediar: ";
    cin>>numCal;
    cont = 0;
    do{
        cout<<"Ingresa la calificacion a promediar: ";
        cin>> calif;
        if(calif >=0 && calif <=10){
            acum = acum + calif;
            //acum+= calif;
            cont+=1;
        }
        else{
            cout<<"la Calificacion: "<<calif<<" no es una calificacion valida"<<endl;
        }
    }while(cont < numCal);
    prom = acum/numCal;
    return prom;
}


float promRep(){
    int calif, numCal, cont;
    float acum = 0, prom;
    cout<<"Ingresa la cantidad de calificaciones a promediar: ";
    cin>>numCal;
    cont = 0;
    do{
        cout<<"Ingresa la calificacion a promediar: ";
        cin>> calif;
        if(calif >=0 && calif <=5){
            acum = acum + calif;
            //acum+= calif;
            cont+=1;
        }
        else{
            cout<<"la Calificacion: "<<calif<<" no es una calificacion reprobatoria"<<endl;
        }
    }while(cont < numCal);
    prom = acum/numCal;
    return prom;
}


float promAp(){
    int calif, numCal, cont;
    float acum = 0, prom;
    cout<<"Ingresa la cantidad de calificaciones a promediar: ";
    cin>>numCal;
    cont = 0;
    do{
        cout<<"Ingresa la calificacion a promediar: ";
        cin>> calif;
        if(calif >=6 && calif <=10){
            acum = acum + calif;
            //acum+= calif;
            cont+=1;
        }
        else{
            cout<<"la Calificacion: "<<calif<<" no es una calificacion aprobatoria"<<endl;
        }
    }while(cont < numCal);
    prom = acum/numCal;
    return prom;
}

