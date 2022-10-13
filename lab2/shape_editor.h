#pragma once
#include "editor.h"
#include "shape.h"

#define MY_SHAPE_ARRAY_SIZE 123

class ShapeEditor : public Editor {
protected:
	POINT pt;
	int index = 0;
	bool isPainting = false;
	void getIndex();
	virtual void createShape() = 0;
public:
	void OnLBdown(HWND);
	void OnLBup(HWND); 
	virtual void OnMouseMove(HWND) = 0;
	void OnPaint(HWND);
};

class PointEditor : public ShapeEditor {
	void createShape();
	void OnMouseMove(HWND);
};

class LineEditor : public ShapeEditor {
	void createShape();
	void OnMouseMove(HWND);
};

class RectEditor : public ShapeEditor {
	void createShape();
	void OnMouseMove(HWND);
};

class EllipseEditor : public ShapeEditor {
	void createShape();
	void OnMouseMove(HWND);
};