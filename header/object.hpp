#ifndef INCLUDE_GUARD_OBJECT_HPP
#define INCLUDE_GUARD_OBJECT_HPP

class Object{
private:
	int m_x;
	int m_y;
	int m_grapchic_handle;
	int m_grapchic_size_x;
	int m_grapchic_size_y;
public:
  SetPositionX(int x);
  SetPositionY(int y);
  GetPositionX();
  GetPositionY();
  SetGprahicSizeX();
  SetGraphicSeizeY();
  GetGrapchicSizeX();
  GetGrapchicSizeY();
  LoadGraphic();
  DrawGraphic();
  MoveGrapchic();
};

#endif