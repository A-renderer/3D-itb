#ifndef ASSETS_H
#define ASSETS_H

#include "header.h"

int border[][2]={{0,0},{800,0},{800,500},{0,500},{0,0}};

int kotak[][2]={{50,50},{200,50},{200,200},{50,200},{50,50}};

int v_face[][2]= {{400, 180},{550,190},{570,200},{520,450},{400,510},{280,450},{230,200},{250,190},{400,180}};

int v_left_eyebrow[][2] = {{305,222},{350,205},{380,220}};

int v_right_eyebrow[][2] = {{420,220},{450,205},{495,222}};

int v_left_upper_eye[][2] = {{320,250},{350,230},{370,250}};

int v_right_upper_eye[][2] = {{430,250},{460,230},{480,250}};

int v_left_lower_eye[][2] = {{320,250},{350,270},{370,250}};

int v_right_lower_eye[][2] = {{430,250},{460,270},{480,250}};

int eye_tag[][2] = {
	{480,250},{430,250},{320,250},{370,250}
};

int upper_lip[][2]={
	{350,330},{400,345},{450,330}
};

int lip_tag[][2]={
	{350,330},{450,330}
};

int bottom_lip[][2]={
	{350,330},{400,380},{450,330}
};

int mouth_tag[][2]={
	{400,380}
};

int nose[][2]={
	{400,265},{375,310},{400,310}
};

int v_hair[][2] = {{358,380},{300,400},{200,550},{150,200},{250,10},{400,0},{550,10},{650,200},{600,550},{500,400},{435,380}};


#endif