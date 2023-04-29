
typedef struct RayCamera{
    int x;
    int y;
    int dir[2];
    int maxRay;
    double angle;//min 0; max 359.999
} Camera;