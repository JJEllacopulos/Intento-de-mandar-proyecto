#ifndef MOVIMIENTO_H_INCLUDED
#define MOVIMIENTO_H_INCLUDED

void mover(char movimiento, MAPA &map_game, AVATAR &pj){

    int y, x;

    switch(movimiento){

        case 'w':
            x=0;
            y=-1;
        break;

        case 's':
            x=0;
            y=1;
        break;

        case 'a':
            x=-1;
            y=0;
        break;

        case 'd':
            x=1;
            y=0;
        break;
    }

    switch (map_game.gets_pocicion(pj.gets_fila() + y, pj.gets_columna() + x)){
        case ' ':
            map_game.borrar_caracter(pj.gets_fila(), pj.gets_columna());
            pj.sets_fila(pj.gets_fila()+ y);
            pj.sets_columna(pj.gets_columna()+ x);

            map_game.imprimir_caracter(pj.gets_fila(), pj.gets_columna(), pj.gets_caracter());
        break;

        case 'x':
            ///"Muro"
        break;
    }

}

void control(MAPA &map_game, AVATAR &pj){

    if(key[KEY_RIGHT]){
        mover( 's', map_game, pj);
    }
    else{
        if(key[KEY_LEFT]){
            mover( 'w', map_game, pj);
        }
        else{
            if(key[KEY_UP]){
                mover( 'a', map_game, pj);
            }
            else{
                if(key[KEY_DOWN]){
                    mover( 'd', map_game, pj);
                }
            }
        }
    }

}

#endif // MOVIMIENTO_H_INCLUDED
