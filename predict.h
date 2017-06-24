#ifndef __PREDICT_H
#define __PREDICT_H

int drift_particle_full(int i, int time1, int blocking);
void drift_particle(int i, int time1);
void lock_particle_if_not(int i, MyIDType id);
void unlock_particle_if_not(int i, MyIDType id);
void lock_particle(int i);
void unlock_particle(int i);

void move_particles(int time1);

#endif
