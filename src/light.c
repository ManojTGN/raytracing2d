#include "light.h"

void initLight(Light* light){
    if(light == NULL) return;

    for(int i = 0; i < MAX_RAYS; i++){
        light->rays[i].x = light->x;
        light->rays[i].y = light->y;
        light->rays[i].dir[0] = light->x + (light->intensity) * cos(2 * M_PI * i / MAX_RAYS);
        light->rays[i].dir[1] = light->y + (light->intensity) * sin(2 * M_PI * i / MAX_RAYS);
        light->rays[i].distance = light->intensity;
    }

    light->_isInit = 1;
}

void drawLight(grafixWindow window, Light light){
    if(!light._isInit) initLight(&light);

    for(int i = 0; i < MAX_RAYS; i++){
        drawRayLine(window,light.rays[i]);
        // printf("[%d %d] ",light.rays[i].dir[0],light.rays[i].dir[1]);
    }

}
