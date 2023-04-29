#include "grafix.h"
#include "light.h"

#define WIDTH 800
#define HEIGHT 800

int main(){
    
    grafixWindow window;
    grafixEvent* event;int eventSize;

    createGrafixWindow(&window,WIDTH,HEIGHT,"RayTracing2d");
    showGrafixWindow(window);
    
    Light light = { WIDTH/2,HEIGHT/2,(grafixColor){255,255,255} };
    double aspect_ratio = (double)WIDTH / (double)HEIGHT;

    for(int i = 0; i < MAX_RAYS; i++){
        light.rays[i].dir[0] = light.x + (WIDTH) * cos(2 * M_PI * i / MAX_RAYS);
        light.rays[i].dir[1] = light.y + (HEIGHT) * sin(2 * M_PI * i / MAX_RAYS);
    }

    while(!isGrafixWindowEnded(window)){
        fillGrafixWindow(window,(grafixColor){0,0,0});

        for(int i = 0; i < MAX_RAYS; i++){
            drawRayLine(window, );
        }

        manageGrafixEvent(window,&event,&eventSize);
        for(int i = 0; i < eventSize; i++){
            if(event[i].type == WM_DESTROY){
                endGrafixWindow(window);
            }
        }
        printf("%d\r",getGrafixFPS(window));
        updateGrafixWindow(window);
        updateGrafixTime(window);
        tickGrafix(window,10);
    }

    return 0;
}   