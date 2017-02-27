#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

void L (int valoare, int bin[], int poz);
void G(int valoare, int bin[], int poz);
void R(int valoare, int bin[], int poz);

int main()
{
    char codDat[10], denumire[21];
    int i = 0;
    cout << "Introduceti denumirea produsului (maxim 20 caractere): ";
    cin >> denumire;
    cout << "Introduceti codul produsului (maxim 9 cifre, fara spatii): ";
    cin >> codDat;

    int lungime = strlen(codDat);
    //Checking. Count all the chars using a contor
    while(codDat[i] >= '0' && codDat[i] <= '9')
        i++;
    if(i != lungime){
        cout << "Cod eronat: " << codDat << endl;
        return 0;
    }

    char codRO [] = "594";
    char sirSapte[9]=""; //the array is empty
    if(lungime < 9){
        int j;
        for(j = 0; j < 9 - lungime; j++)
            sirSapte[j] = 7; //Limit sirSapte at right by adding a char '\0'
        sirSapte[j] = '\0';
    }

    char ean13[13]; // 13 chars, 12+1
    strcpy(ean13, codRO);
    strcat(ean13, sirSapte);
    strcat(ean13, codDat);
    cout << "Primele 12 caractere sunt: " << ean13 << endl;

    //Convert char in int
    int nean13[13];
    for(i = 0; i < 12; i++)
        nean13[i] = ean13[i] - '0';

    int s1, s2, S;
    s1 = s2 = 0;
    for(i = 0; i < 12; i = i + 2){
        s1 = s1 + nean13[i];
        s2 = s2 + nean13[i + 1];
    }
    S = s1 + 3*s2;
    nean13[12] = 10 - S%10; //check control

    cout << "Codul de bare format din 13 cifre este: "<< ean13 << nean13[12] << endl;

    //array of 95 binary values
    int b[95];
    // make 101 code
    b[0] = b[2] = 1;
    b[1] = 0;
    //Code first 6 numbers (char) from nean13[1] to nean13[6]
    L(nean13[1], b, 3);// first nean13[1]. It`s calling F function
    G(nean13[2], b, 10);//after 7 pozitions it`s shown nean13[2] on pozition 10 = 3+7
    G(nean13[3], b, 17);
    L(nean13[4], b, 24);
    L(nean13[5], b, 31);
    G(nean13[6], b, 38);
    //code of middle zone, 01010
    b[45]=b[47]=b[49]=0;
    b[46]=b[48]=1;
    //code the second part of barcode from nean13[7] to nean13[12]
    //for all function is calling R function
    for(i = 0; i < 6; i++)
        R(nean13[7 + i], b, 50 + i*7);
    //code for last part of the code, 101
    b[92] = b[94] = 1;
    b[93] = 0;

    //html format code
    fstream cod;
    cod.open("cod.html", ios::out);
    cod << "<!DOCTYPE html>" << endl;
    cod << "<html>" << endl;
    cod << "<body>" << endl;
    cod << "<center>" << endl;
    cod << "<svg height = \"50\" width=\"200\">" << endl;

    int pozx = 10;
    for (i = 0; i < 95; i++){
        if(b[i] == 1)
            cod << "<line x1 = \"" << pozx << "\" y1 = \"20\" x2 = \"" << pozx
            << "\" y2 = \"50\" style = \"stroke:rgb(0,0,0); stroke-width:2\" />"
            << endl;
        pozx = pozx + 2;
    }
    cod << "</svg>" << endl;
    cod << "</center>" << endl;
    cod << "</body>" << endl;
    cod << "<html>" << endl;
    cod.close();

    return 0;
}
