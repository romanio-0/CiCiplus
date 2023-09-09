#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <Windows.h>

#define ADD_PATH_INCLUDES L"tmpHeader"

void versionCiCiplus() {
    wprintf(L"С версией у тебя все в норме, не очкуй (версия - 0.1).\n");
}

void helpCiCiplus() {
    wprintf(L"Ну кароч, инструкция такова:\n");
    wprintf(L"\t1 - Меня важно положить с компилятором (или ты не че не получишь).\n");
    wprintf(L"\t2 - Все параметры которые ты написал, будут переданны моим старшим (компилятору), так что выражайся аккуратнее.\n");
    wprintf(L"Ну а все остальное уже надо спрашивать у компилятора, я тут мало что решаю.\n\n");
    wprintf(L"Вообще, от меня тут требуется чтобы компилятор понял твои каракули, так что мне вообще все равно что ты написал, ");
    wprintf(L"но если я увижу запрешенку, то расскажу все кому нужно))0)0.\n");
    wprintf(L"Но ты можешь не беспокоиться, я уже просмотрел весь твой комп, так что если за тобой еще не приехали, то все ок.\n");
}

wchar_t* editingIncludes(wchar_t* path, wchar_t* addPath){

}

int main(void) {
    setlocale(LC_ALL, "Russian");

    int argc;
    wchar_t **argv = CommandLineToArgvW(GetCommandLineW(), &argc);

    if (argc < 2) {
        wprintf(L"Ты хоть параметры укажи, а то я хз ваще...\n");
        return 0;
    }

    for (int i = 1; i < argc; ++i) {
        if (!wcscmp(argv[i], L"--version")) {
            versionCiCiplus();
            break;
        } else if (!wcscmp(argv[i], L"--help")) {
            helpCiCiplus();
            break;
        }
        if (argv[i][0] == L'-'){
            if (argv[i][1] == L'I'){
                argv[i] = editingIncludes(argv[i], ADD_PATH_INCLUDES);
                // перевести все хедеры
                break;
            }
        }

    }


    return 0;
}
