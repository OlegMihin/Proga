#include "pch.h"
#include "Cwfc.h"
#include <Windows.h>
#include "resource.h"

void DrowFrame(CDC* odc)
{

}

HINSTANCE hInst;
HBITMAP hBitmap;
HWND hPic;

BOOL CALLBACK DlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nCmdShow)
{
	hInst = hInstance;
	DialogBoxParam(hInstance, MAKEINTRESOURCE(IDD_NEWDIALOG), 0, (DlgProc), 0);
	return 0;
}

BOOL CALLBACK DlgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_INITDIALOG:
		hBitmap = LoadBitmap(hInst, MAKEINTRESOURCE(IDB_BITMAP1));
		if (hBitmap == NULL)
		{
			MessageBox(hwnd, "Not Picture", "ERROR", NULL);
			break;
		}
		hPic = GetDlgItem(hwnd, IDC_PICTURE);
		break;
	case WM_COMMAND:
	{
		switch (LOWORD(wParam))
		{
		case IDOK:
			// Handle OK button click
			break;
		}
	}
	break;
	case IDCANCEL:
		EndDialog(hwnd, 0);
		return TRUE;
		break;
	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(hPic, &ps);

		// Рисуем изображение
		HDC hdcMem = CreateCompatibleDC(hdc);
		HGDIOBJ hbmOld = SelectObject(hdcMem, hBitmap);

		BITMAP bm;
		GetObject(hBitmap, sizeof(bm), &bm);
		BitBlt(hdc, 0, 0, bm.bmWidth, bm.bmHeight, hdcMem, 0, 0, SRCCOPY);

		SelectObject(hdcMem, hbmOld);
		DeleteDC(hdcMem);

		EndPaint(hPic, &ps);
	}
	break;
	case WM_CLOSE:
		EndDialog(hwnd, 0);
		return TRUE;
		break;
	}
	return FALSE;
}