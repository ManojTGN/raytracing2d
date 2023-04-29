
#ifndef RAY_H
#define RAY_H

typedef struct RayHitInfo{
    int didHit;
    double distance;
    int hitPoint[2];
    int normalVector[2];
}HitInfo;

typedef struct RayRay{
    int x;
    int y;
    int dir[2];

    grafixColor emitColor;
    int distance;
}Ray;

void drawRayLine(grafixWindow window, Ray ray);

#endif /* RAY_H */