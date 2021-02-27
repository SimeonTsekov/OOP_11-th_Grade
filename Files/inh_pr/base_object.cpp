#include "base_object.h"

Base::Base(){
	for(int i=0; i<3; i++){
		pos[i] = 0;
		rot[i] = 0;
		scale[i] = 0;
	}

	model = '\0';
}

Base::Base(int pos[3], int rot[3], int scale[3], char model){
	for(int i=0; i<3; i++){
		this -> pos[i] = pos[i];
		this -> rot[i] = rot[i];
		this -> scale[i] = scale[i];
	}

	this -> model = model;
}

void Base::set_pos(int x, int y, int z){
	this -> pos[1] = x;
	this -> pos[2] = y;
	this -> pos[3] = z;
}

void Base::set_rot(int x, int y, int z){
	this -> rot[1] = x;
	this -> rot[2] = y;
	this -> rot[3] = z;
}

void Base::set_scale(int x, int y, int z){
	this -> scale[1] = x;
	this -> scale[2] = y;
	this -> scale[3] = z;
}

void Base::set_model(char model){
	this -> model = model;
}

int& Base::get_pos(){return *pos;}
int& Base::get_rot(){return *rot;}
int& Base::get_scale(){return *scale;}
char Base::get_model(){return model;}
