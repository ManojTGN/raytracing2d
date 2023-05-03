#include "ray.h"


void drawRayLine(grafixWindow window, Ray ray){
    if( WINDOWS[window.id] == NULL|| window.isDead ) return;
    int dx = abs(ray.dir[0]*ray.distance - ray.x);
    int dy = abs(ray.dir[1]*ray.distance - ray.y);
    int sx = ray.x < ray.dir[0]*ray.distance ? 1 : -1;
    int sy = ray.y < ray.dir[1]*ray.distance ? 1 : -1;
    int err = dx - dy;

    while (ray.x != ray.dir[0]*ray.distance || ray.y != ray.dir[1]*ray.distance) {
        _setPixel(window, ray.x, ray.y, ray.emitColor);
        
        int e2 = err << 1;
        if (e2 > -dy) {
            err -= dy;
            ray.x += sx;
        }
        if (e2 < dx) {
            err += dx;
            ray.y += sy;
        }
    }
    
    _setPixel(window, ray.dir[0]*ray.distance, ray.dir[1]*ray.distance, ray.emitColor);
    
}