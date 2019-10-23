#include <stdio.h>
#include<allegro.h>

#include"Imagenes.h"

#include"Mapa.h"
#include"Avatar.h"
#include"Movimiento.h"

void pantallaso(){
    blit(buffer, screen, 0, 0, 0, 0, 640, 640);
}

int main(){

    allegro_init();
    install_keyboard();

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 640, 0, 0);

    buffer = create_bitmap(640, 640);
    roca = load_bitmap("roca.bmp", NULL);
    enemigo = load_bitmap("enemigo.bmp", NULL);

    MAPA map_pru;
    AVATAR ava_pru;

    while(!key[KEY_ESC]){

        control(map_pru, ava_pru);

        clear(buffer);
        map_pru.leer_mapa();
        pantallaso();
        rest(150);
    }

}
END_OF_MAIN();
