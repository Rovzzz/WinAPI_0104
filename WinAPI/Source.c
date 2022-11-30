#include <windows.h>;
#include <tchar.h>;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE nPrevInstance, LPSTR lpCmdLine, int CmdShow) {

    int msgboxID = MessageBox(
        NULL,
        (LPCWSTR)L"Ресурс недоступен\nВы хотите попробовать еще раз?",
        (LPCWSTR)L"Учетная запись",
        MB_ICONWARNING | MB_YESNOCANCEL | MB_DEFBUTTON2
    );
        switch (msgboxID)
        {
        case IDYES:
            MessageBox(
                NULL,
                _T("Повторить попытку"),
                _T("Учетная запись"),
                MB_OK
            );
            break;
        case IDNO:
            MessageBox(
                NULL,
                _T("Не повторять попытку"),
                _T("Учетная запись"),
                MB_OK
            );
            break;
        case IDCANCEL:
            MessageBox(
                NULL,
                _T("Отменить вход"),
                _T("Учетная запись"),
                MB_OK
            );
            break;
        }

        return msgboxID;
}
