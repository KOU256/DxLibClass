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
  void SetPositionX(int x);
  void SetPositionY(int y);
  void LoadGraphic(char *graph);
  void DrawGraphic();
  void SetGprahicSize();
  void MoveGrapchic();
  int GetPositionX();
  int GetPositionY();
  int GetGrapchicSizeX();
  int GetGrapchicSizeY();
};

#endif