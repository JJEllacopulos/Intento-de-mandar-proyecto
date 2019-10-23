#ifndef AVATAR_H_INCLUDED
#define AVATAR_H_INCLUDED

class AVATAR{
    private:
        char caracter;
        int fila;
        int columna;
    public:
        ///Construct:
        AVATAR();
        ///AVATAR(int x,int y, char ch);
        ///Gets:
        char gets_caracter();
        int gets_fila();
        int gets_columna();
        ///Sets:
        void sets_caracter(char cambio);
        void sets_fila(int cambio);
        void sets_columna(int cambio);

};

///---------------------Construct:---------------------

AVATAR::AVATAR(){

    fila = 5;
    columna = 5;
    caracter = 'a';

}

/*AVATAR::AVATAR(int x = 5,int y = 5, char ch = 'A'){

    fila = x;
    columna = y;
    caracter = ch;

}*/

///---------------------Gets:---------------------

char AVATAR::gets_caracter(){
    return caracter;
}

int AVATAR::gets_fila(){
    return fila;
}

int AVATAR::gets_columna(){
    return columna;
}

///---------------------Sets:---------------------

void AVATAR::sets_caracter(char cambio){
    caracter = cambio;
}

void AVATAR::sets_fila(int cambio){
    fila = cambio;
}

void AVATAR::sets_columna(int cambio){
    columna = cambio;
}




#endif // AVATAR_H_INCLUDED
