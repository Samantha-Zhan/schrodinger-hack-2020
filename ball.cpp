#include "ball.h"

ball::ball(v2 pos, double mass, v2 velocity, v2 acc)
{
    position = pos;
    ballmass = mass;
    ballvelocity = velocity;
    ballacceleration = acc;
    gravity = v2(0, 9.8*ballmass);
    radious = 5.0;
}

v2 ball::a(){
    return ballacceleration;
}

v2 ball::v(){
    return ballvelocity;
}

v2 ball::s(){
    return position;
}

double ball::getR(){
    return radious;
}

void ball::updatepos(v2 force, double time){
    ballacceleration = (force)*(1/ballmass);
    position = (ballacceleration*pow(time, 2))*0.5+ ballvelocity*time+position;
    ballvelocity = ballvelocity + ballacceleration*time;
}
