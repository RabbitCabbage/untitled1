#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <sstream>
using namespace std;

int main() {
    char cmd[200];
    system("cd ../bookstore2021\n");
    system("echo in BookStore");
    system("pwd\n");
    strcpy(cmd, "cmake cmakelists.txt\n");
    system(cmd);
    strcpy(cmd, "make\n");
    system(cmd);
//    for (int i = 1; i <= 6; ++i) {
//        strcpy(cmd, "./code<./data/basicdataset/testcase");
//        char num = static_cast<char>('0' + i);
//        char number[2] = {num, '\0'};
//        strcat(cmd, number);
//        strcat(cmd, ".txt >out.txt\n");
//        system(cmd);
//        strcpy(cmd, "diff out.txt ./data/basicdataset/testcase");
//        strcat(cmd, number);
//        strcat(cmd, "_ans.txt\n");
//        system(cmd);
//        strcpy(cmd, "echo BasicDataSet/testcase");
//        strcat(cmd, number);
//        strcat(cmd, " No Difference\n");
//        system(cmd);
//        strcpy(cmd, "rm out.txt\n");
//        system(cmd);
//        strcpy(cmd, "rm Keyword_BookList\n");
//        system(cmd);
//        strcpy(cmd, "rm AccountFile\n");
//        system(cmd);
//        strcpy(cmd, "rm AccountList\n");
//        system(cmd);
//        strcpy(cmd, "rm Author_BookList\n");
//        system(cmd);
//        strcpy(cmd, "rm Name_BookList\n");
//        system(cmd);
//        strcpy(cmd, "rm BookFile\n");
//        system(cmd);
//        strcpy(cmd, "rm WorkList\n");
//        system(cmd);
//        strcpy(cmd, "rm ISBN_BookList\n");
//        system(cmd);
//        strcpy(cmd, "rm FinanceReport\n");
//        system(cmd);
//        strcpy(cmd, "rm FinanceRecord\n");
//        system(cmd);
//        strcpy(cmd, "rm WorkReportBinary\n");
//        system(cmd);
//    }
//
//    system("touch out.txt");
//    for (int i = 1; i <= 3; ++i) {
//        strcpy(cmd, "./code<./data/basicdataset/testcase7/");
//        char num = static_cast<char>('0' + i);
//        char number[2] = {num, '\0'};
//        strcat(cmd, number);
//        strcat(cmd, ".txt >out.txt\n");
//        system(cmd);
//    }
//    strcpy(cmd, "diff out.txt ./data/basicdataset/testcase7/ans.txt");
//    system(cmd);
//    strcpy(cmd, "echo BasicDataSet/testcase7 No Difference\n");
//    system(cmd);
//    strcpy(cmd, "rm out.txt\n");
//    system(cmd);
//    strcpy(cmd, "rm Keyword_BookList\n");
//    system(cmd);
//    strcpy(cmd, "rm AccountFile\n");
//    system(cmd);
//    strcpy(cmd, "rm AccountList\n");
//    system(cmd);
//    strcpy(cmd, "rm Author_BookList\n");
//    system(cmd);
//    strcpy(cmd, "rm Name_BookList\n");
//    system(cmd);
//    strcpy(cmd, "rm BookFile\n");
//    system(cmd);
//    strcpy(cmd, "rm WorkList\n");
//    system(cmd);
//    strcpy(cmd, "rm ISBN_BookList\n");
//    system(cmd);
//    strcpy(cmd, "rm FinanceReport\n");
//    system(cmd);
//    strcpy(cmd, "rm FinanceRecord\n");
//    system(cmd);
//    strcpy(cmd, "rm WorkReportBinary\n");
//    system(cmd);
//    system("touch out.txt");
//    for (int i = 1; i <= 100; ++i) {
//        strcpy(cmd, "./code<./data/basicdataset/testcase8/");
//        char number[4];
//        stringstream ss;
//        ss<<i;
//        ss>>number;
//        strcat(cmd, number);
//        strcat(cmd, ".txt >>out.txt\n");
//        system(cmd);
//    }
//    strcpy(cmd, "diff out.txt ./data/basicdataset/testcase8/ans.txt");
//    system(cmd);
//    strcpy(cmd, "echo BasicDataSet/testcase8 No Difference\n");
//    system(cmd);
//    strcpy(cmd, "rm out.txt\n");
//    system(cmd);
//    strcpy(cmd, "rm Keyword_BookList\n");
//    system(cmd);
//    strcpy(cmd, "rm AccountFile\n");
//    system(cmd);
//    strcpy(cmd, "rm AccountList\n");
//    system(cmd);
//    strcpy(cmd, "rm Author_BookList\n");
//    system(cmd);
//    strcpy(cmd, "rm Name_BookList\n");
//    system(cmd);
//    strcpy(cmd, "rm BookFile\n");
//    system(cmd);
//    strcpy(cmd, "rm WorkList\n");
//    system(cmd);
//    strcpy(cmd, "rm ISBN_BookList\n");
//    system(cmd);
//    strcpy(cmd, "rm FinanceReport\n");
//    system(cmd);
//    strcpy(cmd, "rm FinanceRecord\n");
//    system(cmd);
//    strcpy(cmd, "rm WorkReportBinary\n");
//    system(cmd);
    for (int i = 3; i <= 3; ++i) {
        strcpy(cmd, "./code<./data/advanceddataset/testcase");
        char num = static_cast<char>('0' + i);
        char number[2] = {num, '\0'};
        strcat(cmd, number);
        strcat(cmd, "/");
        for (int j = 1; j <= 1; ++j) {
            char in_num = static_cast<char>('0' + j);
            char in_number[2] = {in_num, '\0'};
            strcat(cmd, in_number);
            strcat(cmd, ".in >out.txt\n");
            system(cmd);
            strcpy(cmd, "diff out.txt ./data/advanceddataset/testcase");
            strcat(cmd, number);
            strcat(cmd, "/");
            strcat(cmd, in_number);
            strcat(cmd, ".out\n");
            system(cmd);
            strcpy(cmd, "echo AdvancedDataSet/testcase");
            strcat(cmd, number);
            strcat(cmd, "/");
            strcat(cmd, in_number);
            strcat(cmd, ".in No Difference\n");
            system(cmd);
            strcpy(cmd, "rm out.txt\n");
            system(cmd);
            strcpy(cmd, "rm Keyword_BookList\n");
            system(cmd);
            strcpy(cmd, "rm AccountFile\n");
            system(cmd);
            strcpy(cmd, "rm AccountList\n");
            system(cmd);
            strcpy(cmd, "rm Author_BookList\n");
            system(cmd);
            strcpy(cmd, "rm Name_BookList\n");
            system(cmd);
            strcpy(cmd, "rm BookFile\n");
            system(cmd);
            strcpy(cmd, "rm WorkList\n");
            system(cmd);
            strcpy(cmd, "rm ISBN_BookList\n");
            system(cmd);
            strcpy(cmd, "rm FinanceReport\n");
            system(cmd);
            strcpy(cmd, "rm FinanceRecord\n");
            system(cmd);
            strcpy(cmd, "rm WorkReportBinary\n");
            system(cmd);
        }
    }
//    for (int i = 1; i <= 5; ++i) {
//        strcpy(cmd, "./code<./data/complexdataset/testcase");
//        char num = static_cast<char>('0' + i);
//        char number[2] = {num, '\0'};
//        strcat(cmd, number);
//        strcat(cmd, "/");
//        for (int j = 1; j <= 10; ++j) {
//            char in_num = static_cast<char>('0' + j);
//            char in_number[2] = {in_num, '\0'};
//            strcat(cmd, in_number);
//            strcat(cmd, ".in >out.txt\n");
//            system(cmd);
//            strcpy(cmd, "diff out.txt ./data/complexdataset/testcase");
//            strcat(cmd, number);
//            strcat(cmd, "/");
//            strcat(cmd, in_number);
//            strcat(cmd, ".out\n");
//            system(cmd);
//            strcpy(cmd, "echo ComplexDataSet/testcase");
//            strcat(cmd, number);
//            strcat(cmd, "/");
//            strcat(cmd, in_number);
//            strcat(cmd, ".in No Difference\n");
//            system(cmd);
//            strcpy(cmd, "rm out.txt\n");
//            system(cmd);
//            strcpy(cmd, "rm Keyword_BookList\n");
//            system(cmd);
//            strcpy(cmd, "rm AccountFile\n");
//            system(cmd);
//            strcpy(cmd, "rm AccountList\n");
//            system(cmd);
//            strcpy(cmd, "rm Author_BookList\n");
//            system(cmd);
//            strcpy(cmd, "rm Name_BookList\n");
//            system(cmd);
//            strcpy(cmd, "rm BookFile\n");
//            system(cmd);
//            strcpy(cmd, "rm WorkList\n");
//            system(cmd);
//            strcpy(cmd, "rm ISBN_BookList\n");
//            system(cmd);
//            strcpy(cmd, "rm FinanceReport\n");
//            system(cmd);
//            strcpy(cmd, "rm FinanceRecord\n");
//            system(cmd);
//            strcpy(cmd, "rm WorkReportBinary\n");
//            system(cmd);
//        }
//    }
    return 0;
}