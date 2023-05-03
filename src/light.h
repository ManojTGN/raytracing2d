#include "grafix.h"

#ifndef LIGHT_H
#define LIGHT_H

#include "ray.h"
#define MAX_RAYS 50

typedef struct RayLight{
    int x;
    int y;
    int intensity;
    grafixColor emitColor;
    
    int _isInit;
    Ray rays[MAX_RAYS];
}Light;

void initLight(Light* light);
void drawLight(grafixWindow window, Light light);

#endif /* LIGHT_H */