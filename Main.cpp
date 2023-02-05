#include "stdafx.h"
#include "D3D12HelloTriangle.h"

_Use_decl_annotations_
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow)
{
	D3D12HelloTriangle window(1920, 1080, L"登上山巅，仰望之处更是群山");
	return Win32Application::Run(&window, hInstance, nCmdShow);
}