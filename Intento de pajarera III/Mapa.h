#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

class MAPA{
    private:
        const int filas = 20;
        const int columnas = 20;
        ///       F  C
        char mapa[20][20];

    public:
        ///Construct:
        MAPA();

        ///Armar mapa:
        void armar_mapa();

        ///Leer mapa:
        void leer_mapa();
        ///void pantallaso();
        char gets_pocicion( int x, int y);

        ///Alterar mapa:
        void imprimir_caracter( int x, int y, char caracter);
        void borrar_caracter( int x, int y);

        bool Comprobacion_transpaso_mapa();

};

void MAPA::armar_mapa(){

    int x,y;

    for(x=0;x<filas;x++){
        for(y=0;y<columnas;y++){
            mapa[x][y] = ' ';
            if(x == 0 || y == 0 || x == 19 || y == 19){

                mapa[x][y] = 'x';

            }
        }
    }

}

MAPA::MAPA(){

    armar_mapa();

}

void MAPA::leer_mapa(){

    int x,y;

    for(x=0;x<filas;x++){
        for(y=0;y<columnas;y++){

            switch(mapa[x][y]){
                case ' ':

                break;

                case 'a':
                    ///Avatar:
                    draw_sprite(buffer, enemigo, x * 30, y * 30);
                break;

                case 'x':
                    ///Muro:
                    draw_sprite(buffer, roca, x * 30, y * 30);
                break;

            }

        }
    }

}

char MAPA:: gets_pocicion( int x, int y){
    return mapa[x][y];
}

void MAPA::imprimir_caracter( int x, int y, char caracter){
    ///Escribe el "caracter" la pocicion deceada.
    mapa[x][y] = caracter;
}

void MAPA::borrar_caracter( int x, int y){

    ///Borra el "caracter" en la zona deceada.
    mapa[x][y] = ' ';

}

#endif // MAPA_H_INCLUDED
