//
//  Particle.cpp
//  ParticleMadness
//
//  Created by Shawn Lawson on 9/9/14.
//
//

#include "Particle.h"

Particle::Particle()
{
    Particle(ofVec2f(0,0), ofVec2f(0,0), ofColor::white);
}

Particle::Particle(ofVec2f pos, ofVec2f vel, ofColor col)
{
    position = pos;
    velocity = vel;
    color = col;
    destroy = false;
}

void Particle::draw()
{
    ofSetColor(color);
    ofCircle(position, 10.0);
    drawR(8.0);
}

void Particle::drawR(float r)
{
    if( r < 1.0)
        return;
    
    ofCircle(position - (velocity * 10/r ), r);
    
    drawR(r * 0.8);
}

void Particle::update()
{
    velocity.limit(40.0);
    position += velocity;
    
    if (position.y > ofGetHeight()-80) {
        velocity *= ofVec2f(10.0, -10.0);
    }
    
    if (position.x < 0.0 || position.x > ofGetWidth()) {
        destroy = true;
    }
}

void Particle::applyForces()
{
    ofVec2f gravity = ofVec2f(0.0, 9.8);
    velocity += gravity;
}















