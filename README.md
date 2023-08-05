# CrackMe1.0
CrackMe 1.0 source code

### main.cpp
```cpp
#include "main.h"

int main(int argc, char* argv[]) {
    if (argc == 1) {
        cout << encode("Input error,please input \"-h\" or \"--help\".") << endl;
        return 0;
    }
    String arg = argv[1];
    if (equal(arg, encode("-h")) || equal(arg, encode("--help"))) {
        showHelp();
        return 0;
    } else if (equal(arg, encode("-v")) || equal(arg, encode("--version"))) {
        cout << encode("CrackMe Version:1.0. Developed with C++20,Build with Cmake 3.18.4.") << endl;
        return 0;
    } else if (equal(arg, encode("-t")) || equal(arg, encode("--tip"))) {
        if (argc == 2) {
            cout << encode("Please input [1-5] number!") << endl;
            return 0;
        }
        String arg = argv[2];
        if (equal(arg, "1")) {
            cout << encode("Author\'s name.") << endl;
        } else if (equal(arg, "2")) {
            cout << encode("Help tips.") << endl;
        } else if (equal(arg, "3")) {
            cout << encode("Hexadecimal") << endl;
        } else if (equal(arg, "4")) {
            cout << encode("Web CrackMe") << endl;
        } else if (equal(arg, "5")) {
            cout << encode("RC4") << endl;
        } else {
            cout << encode("Please input [1-5] number!") << endl;
        }
        return 0;
    } else if (equal(arg, encode("-s")) || equal(arg, encode("--shell"))) {
        if (argc == 2) {
            cout << encode("Please input Shell Script") << endl;
            return 0;
        }
        String script = "";
        for (int i = 2;i < argc;i++) {
            script.append(argv[i]).append(" ");
        }
        system(script.c_str());
        return 0;
    } else if (equal(arg, encode("-f1")) || equal(arg, encode("--flag1"))) {
        if (argc == 2) {
            cout << flag_empty << endl;
            return 0;
        }
        String flag = argv[2];
        if (equal(flag, flag1)) {
            cout << flag_success << endl;
        } else {
            cout << flag_failed << endl;
        }
        return 0;
    } else if (equal(arg, encode("-f2")) || equal(arg, encode("--flag2"))) {
        if (argc == 2) {
            cout << flag_empty << endl;
            return 0;
        }
        String flag = argv[2];
        if (equal(flag, flag2)) {
            cout << flag_success << endl;
        } else {
            cout << flag_failed << endl;
        }
        return 0;
    } else if (equal(arg, encode("-f3")) || equal(arg, encode("--flag3"))) {
        if (argc == 2) {
            cout << flag_empty << endl;
            return 0;
        }
        String flag = argv[2];
        if (equal(flag, flag3)) {
            cout << flag_success << endl;
        } else {
            cout << flag_failed << endl;
        }
        return 0;
    } else if (equal(arg, encode("-f4")) || equal(arg, encode("--flag4"))) {
        if (argc == 2) {
            cout << flag_empty << endl;
            return 0;
        }
        String flag = argv[2];
        if (equal(flag, flag4)) {
            cout << flag_success << endl;
        } else {
            cout << flag_failed << endl;
        }
        return 0;
    } else if (equal(arg, encode("-f5")) || equal(arg, encode("--flag5"))) {
        if (argc == 2) {
            cout << flag_empty << endl;
            return 0;
        }
        String flag = argv[2];
        if (equal(flag, flag5)) {
            cout << flag_success << endl;
        } else {
            cout << flag_failed << endl;
        }
        return 0;
    } else if (equal(arg, flag1)) {
        cout << encode("This is flag1, not other tips") << endl;
        return 0;
    } else if (equal(arg, flag2)) {
        system(encode("echo XYD > flag3"));
        cout << encode("This is flag2, tips: Shell") << endl;
        return 0;
    } else if (equal(arg, flag3)) {
        cout << encode("This is flag3, tips: app.hujiayucc.cn") << endl;
        return 0;
    } else if (equal(arg, flag4)) {
        cout << encode("This is flag4, tips: The secret key for a segment of encrypted text, encrypted text requires you to find for it yourself.") << endl;
        system(encode("echo \"B45C4188127D09F9F2815AC98E0F82B7F2F14996998E7B9A73F9DEA6140A7E00CD379B93A0ECB6BF3F2FDB4158D42F86D81496F90A15E21B1F25283A68075694C25EE835FD306FC4F69B17\" > .f5"));
        return 0;
    } else if (equal(arg, flag5)) {
        cout << encode("Congratulations on completing all the challenges!") << endl;
        return 0;
    }

    cout << encode("Input error,please input \"-h\" or \"--help\".") << endl;
}

void showHelp() {
    // 提示：注意到这个说明你已经有头绪了！
    cout << encode("#####-/..../../.../../.../.-/-.-./.-../..-/./.-.-.-####START####") << endl;
    cout << encode("#  Build Timw:2023/08/02  Version:1.0  Copyright By hujiayucc  #") << endl;
    cout << encode("#  Usage: CrackMe [option] ... [arg]                           #") << endl;
    cout << encode("#   flag   :  If input arg is flag, print about this flag info #") << endl;
    cout << encode("#   -f,  --flag [1-5] [flag]  :   Verify flag                  #") << endl;
    cout << encode("#   -h,  --help          :   Print about this CrackMe help     #") << endl;
    cout << encode("#   -s,  --shell [shell] :   Run shell script                  #") << endl;
    cout << encode("#   -t,  --tip   [1-5]   :   Show more about this crackme tips #") << endl;
    cout << encode("#   -v,  --version       :   Print this project build info     #") << endl;
    cout << encode("#   Tips: Verify flag : CrackMe [-f1 or --flag1] hujiayucc     #") << endl;
    cout << encode("####0#####x#####1#####3#####1#####5#####6#####7#####7####END####") << endl;
}

bool equal(String t1, String t2) { return t1 == t2; }
```

### main.h
```cpp
#include "EnCode.h"
#include <string>
#ifndef MAIN_H
#define MAIN_H
#define encode( string ) _encode(string)
using namespace std;
using String = std::string;
String t = "❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀\n❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀\n❀❀❀❀❀❀❀❀✿❀❀❀✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿❀❀❀❀❀\n❀❀❀❀❀❀❀✿✿❀❀❀✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿❀✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿✿✿❀❀❀❀❀\n❀❀❀❀❀❀❀✿✿✿❀❀✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿❀✿✿❀✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿✿✿✿✿✿✿❀❀❀❀❀\n❀❀❀❀❀❀❀✿✿❀❀✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿✿❀✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿❀✿✿❀✿✿✿✿❀❀❀❀❀❀❀❀❀✿✿✿✿✿✿✿✿❀✿❀❀❀✿✿❀❀❀❀❀\n❀❀❀❀❀❀✿✿❀❀❀✿✿❀✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿❀❀✿✿❀❀✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿❀❀✿✿❀❀✿✿✿❀❀❀❀❀❀❀❀❀✿✿✿✿✿❀❀❀❀✿✿❀❀✿✿❀❀❀❀❀\n❀❀❀❀❀✿✿✿❀❀✿✿❀❀❀✿✿❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿❀❀❀✿✿❀❀❀✿❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿❀❀❀✿✿❀❀❀✿✿❀❀❀❀❀❀❀❀❀❀❀✿✿✿❀❀❀❀✿✿❀❀✿❀❀❀❀❀❀\n❀❀❀❀❀✿✿❀❀✿✿✿✿✿✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀✿❀✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀✿✿✿❀❀❀✿✿❀❀❀❀✿❀❀❀❀❀❀❀❀❀❀❀✿✿❀❀❀❀✿✿❀❀✿✿❀❀❀❀❀❀\n❀❀❀❀✿✿✿❀✿✿✿✿✿✿✿✿✿✿✿✿✿❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿✿✿✿✿✿✿✿✿❀❀❀❀❀❀❀❀❀✿✿✿❀❀❀❀❀✿❀✿✿✿✿✿❀❀❀❀❀❀❀❀❀✿✿✿❀✿✿❀✿✿❀❀✿✿❀❀❀❀❀❀\n❀❀❀❀✿✿✿✿✿✿❀❀✿✿❀❀✿✿✿✿✿✿❀❀❀❀❀✿✿✿✿✿✿✿✿✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿❀❀❀✿✿✿✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿✿❀✿✿❀❀✿✿❀✿❀❀❀❀\n❀❀❀✿✿❀✿✿✿✿✿✿✿✿✿✿✿✿✿❀❀❀❀❀❀❀❀✿✿✿❀❀✿❀❀❀❀✿✿❀❀✿✿❀❀❀❀❀❀❀❀✿✿✿❀✿❀✿✿✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿✿✿❀✿✿❀❀✿✿✿✿✿❀❀❀\n❀❀✿✿❀❀✿❀❀✿✿✿✿❀✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿❀✿✿❀✿✿❀✿✿✿❀❀❀❀❀❀❀✿✿✿❀❀✿❀❀✿❀❀✿✿❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿❀❀✿✿✿✿✿✿✿✿✿✿✿✿❀❀❀\n❀❀❀❀❀❀✿❀❀✿✿✿✿❀❀✿❀✿❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿❀✿✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀❀✿✿❀❀❀❀❀❀❀❀❀❀❀❀✿✿❀✿❀❀✿✿✿✿✿✿❀❀❀❀✿✿❀❀❀\n❀❀❀❀❀❀✿❀❀✿✿✿✿❀❀✿❀✿❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿✿❀❀❀✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀❀✿✿❀❀❀❀❀❀❀❀❀❀❀✿✿❀❀✿❀✿✿✿❀❀❀❀❀❀❀❀✿✿❀❀❀\n❀❀❀❀❀✿✿❀❀✿❀✿✿❀❀✿❀✿❀❀❀❀❀❀❀❀❀✿✿✿✿❀✿❀❀❀❀✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀❀❀✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿✿❀❀❀✿✿✿❀✿✿❀❀❀❀\n❀❀❀❀❀✿✿❀❀✿✿✿✿❀✿✿❀✿❀❀❀❀❀❀❀❀❀❀✿❀❀❀✿❀❀❀✿✿✿✿❀❀❀✿❀❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀❀❀✿✿❀❀❀✿❀❀❀❀❀❀❀❀❀✿✿❀❀✿✿✿✿✿✿✿✿✿✿✿❀❀❀❀\n❀❀❀❀❀✿✿❀❀✿❀❀✿❀✿✿❀✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿❀✿✿✿✿✿✿✿❀❀✿✿❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀❀❀❀✿✿❀❀✿❀❀❀❀❀❀❀❀❀❀✿❀❀❀✿✿✿✿❀❀❀❀✿✿❀❀❀❀\n❀❀❀❀❀✿✿❀❀✿❀❀✿❀❀❀❀✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿❀❀❀✿✿✿❀✿✿❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀❀❀❀✿✿✿❀✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿❀❀✿✿❀❀❀❀\n❀❀❀❀❀✿✿❀❀✿✿✿✿❀✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿❀❀❀❀❀❀❀✿✿✿✿✿❀❀❀❀❀❀❀❀❀✿✿❀❀❀❀❀❀❀❀✿✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿✿❀❀❀❀❀\n❀❀❀❀❀✿✿❀✿✿❀✿✿❀❀✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿❀❀❀❀❀❀❀❀✿✿✿✿❀❀❀❀❀❀❀❀❀✿✿❀❀❀❀❀❀❀❀❀✿✿✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿✿❀❀❀❀❀\n❀❀❀❀❀✿✿❀❀✿❀✿✿❀❀❀✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿❀❀❀❀❀❀❀❀❀✿✿✿❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀❀❀❀❀❀❀❀✿✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿✿✿❀❀❀❀❀\n❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀❀❀❀❀❀❀❀✿❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀\n❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀❀";

String flag_success = encode("Flag verify success!");
String flag_failed = encode("Flag verify failed, flag error!");
String flag_empty = encode("Flag can't is empty, please input flag.");

String flag1 = encode("hujiayucc");
String flag2 = encode("20010615");
String flag3 = encode("XYD");
String flag4 = encode("EEdJjzD5HRxjBKTp");
String flag5 = encode("东莞市东城小宇网络工作室");

void showHelp();
bool equal(String, String);
#endif // MAIN_H
```

### EnCode.h
```cpp
#pragma once
#include <iostream>

namespace crypt {

#define XSTR_SEED ((__TIME__[7] - '0') * 1ull    + (__TIME__[6] - '0') * 10ull  + \
                   (__TIME__[4] - '0') * 60ull   + (__TIME__[3] - '0') * 600ull + \
                   (__TIME__[1] - '0') * 3600ull + (__TIME__[0] - '0') * 36000ull)

    constexpr unsigned long long linear_congruent_generator(unsigned rounds) {
        return 1013904223ull + (1664525ull * ((rounds > 0) ? linear_congruent_generator(rounds - 1) : (XSTR_SEED))) % 0xFFFFFFFF;
    }

#define Random() linear_congruent_generator(10)
#define XSTR_RANDOM_NUMBER(Min, Max) (Min + (Random() % (Max - Min + 1)))

    template <unsigned size>
    class Xor_string {
    public:
        const unsigned _nb_chars = (size - 1);
        char _string[size];
        unsigned char _key1 = XSTR_RANDOM_NUMBER(0x00, 0xA0);
        unsigned char _key2 = XSTR_RANDOM_NUMBER(0xA1, 0xFF);

        //加密存储
        inline constexpr Xor_string(const char* string) : _string{} {
            for (unsigned i = 0u; i < size; ++i) {
                _string[i] = (string[i] ^ _key1) + _key2;   //加密
            }
        }

        //解密
        const char* decrypt() const {
            char* ret_string = const_cast<char*>(_string);
            for (unsigned i = 0; i < _nb_chars; i++) {
                ret_string[i] = (_string[i] - _key2) ^ _key1;   //解密
            }
            ret_string[_nb_chars] = '\0';
            return ret_string;
        }
    };
}// END crypt NAMESPACE ========================================================

#define XorS(name, my_string)    constexpr crypt::Xor_string<(sizeof(my_string)/sizeof(char))> name(my_string)
#define XorString(my_string) []{ constexpr crypt::Xor_string<(sizeof(my_string)/sizeof(char))> expr(my_string); return expr; }().decrypt()
#define _encode( string ) XorString( string )
```

### CMakeLists.txt
```
cmake_minimum_required(VERSION 3.18.4)
project(CrackMe)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE "Release")
LINK_LIBRARIES(m pthread)

file(REMOVE_RECURSE "CMakeFiles")
file(GLOB_RECURSE SRC *.cpp)

add_executable(CrackMe ${SRC})
```
