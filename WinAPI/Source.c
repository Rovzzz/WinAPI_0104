#include <windows.h>;
#include <tchar.h>;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE nPrevInstance, LPSTR lpCmdLine, int CmdShow) {

    int msgboxID = MessageBox(
        NULL,
        (LPCWSTR)L"������ ����������\n�� ������ ����������� ��� ���?",
        (LPCWSTR)L"������� ������",
        MB_ICONWARNING | MB_YESNOCANCEL | MB_DEFBUTTON2
    );
        switch (msgboxID)
        {
        case IDYES:
            MessageBox(
                NULL,
                _T("��������� �������"),
                _T("������� ������"),
                MB_OK
            );
            break;
        case IDNO:
            MessageBox(
                NULL,
                _T("�� ��������� �������"),
                _T("������� ������"),
                MB_OK
            );
            break;
        case IDCANCEL:
            MessageBox(
                NULL,
                _T("�������� ����"),
                _T("������� ������"),
                MB_OK
            );
            break;
        }

        return msgboxID;
}
