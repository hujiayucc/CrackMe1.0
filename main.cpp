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