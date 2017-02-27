void L(int valoare, int bin[], int poz){

    switch(valoare){
    case 0: //0001101
        bin[poz] = bin[poz + 1]= bin[poz + 2] = bin[poz + 5] = 0;
        bin[poz + 3] = bin[poz + 4]= bin[poz + 6] = 1;
        break;
    case 1: //0011001
        bin[poz] = bin[poz + 1]= bin[poz + 4] = bin[poz + 5] = 0;
        bin[poz + 2] = bin[poz + 3]= bin[poz + 6] = 1;
        break;
    case 2: //0010011
        bin[poz] = bin[poz + 1]= bin[poz + 3] = bin[poz + 4] = 0;
        bin[poz + 2] = bin[poz + 5]= bin[poz + 6] = 1;
        break;
    case 3: //0111101
        bin[poz] = bin[poz + 5] = 0;
        bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4]= bin[poz + 6] = 1;
        break;
    case 4: //0100011
        bin[poz] = bin[poz + 2]= bin[poz + 3] = bin[poz + 4] = 0;
        bin[poz + 1] = bin[poz + 5]= bin[poz + 6] = 1;
        break;
    case 5: //0110001
        bin[poz] = bin[poz + 3]= bin[poz + 4] = bin[poz + 5] = 0;
        bin[poz + 1] = bin[poz + 2]= bin[poz + 6] = 1;
        break;
    case 6: //0101111
        bin[poz] = bin[poz + 2] = 0;
        bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5]= bin[poz + 6] = 1;
        break;
    case 7: //0111011
        bin[poz] = bin[poz + 4] = 0;
        bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 1;
        break;
    case 8: //0110111
        bin[poz] = bin[poz + 3] = 0;
        bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
        break;
    case 9: //0001011
        bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = 0;
        bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 1;
        break;
    }
}

void G(int valoare, int bin[], int poz){
       switch(valoare){
    case 0: //0100111
        bin[poz] = bin[poz + 2]= bin[poz + 3] = 0;
        bin[poz + 1] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
        break;
    case 1: //0110011
        bin[poz] = bin[poz + 3]= bin[poz + 4] = 0;
        bin[poz + 1] = bin[poz + 2] = bin[poz + 5] = bin[poz + 6] = 1;
        break;
    case 2: //0011011
        bin[poz] = bin[poz + 1] = bin[poz + 4] = 0;
        bin[poz + 2] = bin[poz + 3] = bin[poz + 5]= bin[poz + 6] = 1;
        break;
    case 3: //0100001
        bin[poz] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4]= bin[poz + 5] = 0;
        bin[poz + 1] = bin[poz + 6] = 1;
        break;
    case 4: //0011101
        bin[poz] = bin[poz + 1] = bin[poz + 5] = 0;
        bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = bin[poz + 6] = 1;
        break;
    case 5: //0111001
        bin[poz] = bin[poz + 4] = bin[poz + 5] = 0;
        bin[poz + 1] = bin[poz + 2]=  bin[poz + 3]= bin[poz + 6] = 1;
        break;
    case 6: //0000101
        bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 5] = 0;
        bin[poz + 4] = bin[poz + 6] = 1;
        break;
    case 7: //0010001
        bin[poz] = bin[poz + 1] = bin[poz + 3] =  bin[poz + 4] = bin[poz + 5] = 0;
        bin[poz + 2] = bin[poz + 6] = 1;
        break;
    case 8: //0001001
        bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = bin[poz + 5] = 0;
        bin[poz + 3] = bin[poz + 6] = 1;
        break;
    case 9: //0010111
        bin[poz] = bin[poz + 1]= bin[poz + 3] = 0;
        bin[poz + 2] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 1;
        break;
    }
}

void R(int valoare, int bin[], int poz){
       switch(valoare){
    case 0: //1110010
        bin[poz + 3] = bin[poz + 4]= bin[poz + 6] = 0;
        bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 5] = 1;
        break;
    case 1: //1100110
        bin[poz + 2] = bin[poz + 3]= bin[poz + 6] = 0;
        bin[poz] = bin[poz + 1] = bin[poz + 4] = bin[poz + 5] = 1;
        break;
    case 2: //1101100
        bin[poz + 2] = bin[poz + 5]= bin[poz + 6] = 0;
        bin[poz] = bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = 1;
        break;
    case 3: //1000010
        bin[poz + 1] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4]= bin[poz + 6] = 0;
        bin[poz] = bin[poz + 5] = 1;
        break;
    case 4: //1011100
        bin[poz + 1] = bin[poz + 5]= bin[poz + 6] = 0;
        bin[poz] = bin[poz + 2] = bin[poz + 3] = bin[poz + 4] = 1;
        break;
    case 5: //1001110
        bin[poz + 1] = bin[poz + 2]= bin[poz + 6] = 0;
        bin[poz] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = 1;
        break;
    case 6: //1010000
        bin[poz + 1] = bin[poz + 3] = bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 0;
        bin[poz] = bin[poz + 2] = 1;
        break;
    case 7: //1000100
        bin[poz + 1] = bin[poz + 2]= bin[poz + 3] = bin[poz + 5] = bin[poz + 6] = 0;
        bin[poz] = bin[poz + 4]  = 1;
        break;
    case 8: //1001000
        bin[poz + 1] = bin[poz + 2]= bin[poz + 4] = bin[poz + 5] = bin[poz + 6] = 0;
        bin[poz] = bin[poz + 3]  = 1;
        break;
    case 9: //1110100
        bin[poz + 3] = bin[poz + 5]= bin[poz + 6] = 0;
        bin[poz] = bin[poz + 1] = bin[poz + 2] = bin[poz + 4] = 1;
        break;
    }
}

