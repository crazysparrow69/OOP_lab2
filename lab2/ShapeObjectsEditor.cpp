#include "framework.h"
#include "ShapeObjectsEditor.h"
#include "shape.h"
#include "editor.h"
#include "shape_editor.h"

ShapeEditor* pse = NULL;
ShapeObjectsEditor::ShapeObjectsEditor(void) {}
ShapeObjectsEditor::~ShapeObjectsEditor() {}

void ShapeObjectsEditor::StartPointEditor(HWND hWnd) {
	if (pse) delete pse;
	pse = new PointEditor;
	SetWindowText(hWnd, L"����� ����� ������");
}

void ShapeObjectsEditor::StartLineEditor(HWND hWnd) {
	if (pse) delete pse;
	pse = new LineEditor;
	SetWindowText(hWnd, L"����� ����� ���");
}

void ShapeObjectsEditor::StartRectEditor(HWND hWnd) {
	if (pse) delete pse;
	pse = new RectEditor;
	SetWindowText(hWnd, L"����� ����� ������������");
}

void ShapeObjectsEditor::StartEllipseEditor(HWND hWnd) {
	if (pse) delete pse;
	pse = new EllipseEditor;
	SetWindowText(hWnd, L"����� ����� �����");
}

void ShapeObjectsEditor::OnLBdown(HWND hWnd) {
	if (pse) pse->OnLBdown(hWnd);
}

void ShapeObjectsEditor::OnLBup(HWND hWnd) {
	if (pse) pse->OnLBup(hWnd);
}

void ShapeObjectsEditor::OnMouseMove(HWND hWnd) {
	if (pse) pse->OnMouseMove(hWnd);
}

void ShapeObjectsEditor::OnPaint(HWND hWnd) {
	if (pse) pse->OnPaint(hWnd);
}