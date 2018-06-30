#include"DxLib.h"
#include"../header/object.hpp"

void Object::SetGprahicSizeX(int x){
	m_x = x;
}

void Object::SetGraphicSeizeY(int y){
	m_y = y;
}

void Object::LoadGraphic(char *graph){
	m_grapchic_handle = LoadGraph(graph);
}

void Object::DrawGraphic(){
	DrawGraph(m_x, m_y, TRUE);
}

void Object::SetGprahicSize(){
	int size_x, size_y;
	GetGraphSize(m_grapchic_handle, size_x, size_y);
}

void Object::MoveGrapchic(){

}

int Object::GetPositionX(){
	return m_x;
}

int Object::GetPositionY(){
	return m_y;
}

int Object::GetGrapchicSizeX(){
	return m_grapchic_size_x;
}

int Object::GetGrapchicSizeY(){
	return m_grapchic_size_y;
}