#include <gtest/gtest.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// AI로 생성하였음.

// C++ 링키지 문제 해결
#ifdef __cplusplus
extern "C" {
#endif

#include "LibLog.h"

#ifdef __cplusplus
}
#endif

// 기본 기능 테스트
TEST(LibLogTest, LogMessageBasic) {
    // 함수 호출이 crash 없이 실행되는지 확인
    log_message("Test message from C file");
    SUCCEED(); // 여기까지 오면 성공
}

// NULL 포인터 테스트
TEST(LibLogTest, LogMessageWithNull) {
    // NULL 포인터 전달 시 crash 없는지 확인
    log_message(NULL);
    SUCCEED();
}

// 빈 문자열 테스트  
TEST(LibLogTest, LogMessageWithEmptyString) {
    log_message("");
    SUCCEED();
}

// 일반적인 메시지 테스트
TEST(LibLogTest, LogMessageWithNormalText) {
    log_message("This is a normal log message");
    SUCCEED();
}

// 숫자 포함 메시지 테스트
TEST(LibLogTest, LogMessageWithNumbers) {
    log_message("Log message with numbers: 12345");
    SUCCEED();
}

// 특수 문자 테스트
TEST(LibLogTest, LogMessageWithSpecialChars) {
    log_message("Special chars: !@#$%^&*()");
    SUCCEED();
}

// 개행 문자 테스트
TEST(LibLogTest, LogMessageWithNewline) {
    log_message("Message with newline\n");
    SUCCEED();
}

// 탭 문자 테스트
TEST(LibLogTest, LogMessageWithTab) {
    log_message("Message with tab\there");
    SUCCEED();
}

// 긴 문자열 테스트
TEST(LibLogTest, LogMessageWithLongString) {
    char long_message[1000];
    int i;
    
    // 긴 문자열 생성
    for(i = 0; i < 999; i++) {
        long_message[i] = 'A';
    }
    long_message[999] = '\0';
    
    log_message(long_message);
    SUCCEED();
}

// 여러 번 호출 테스트
TEST(LibLogTest, MultipleLogCalls) {
    int i;
    char buffer[100];
    
    for(i = 0; i < 5; i++) {
        sprintf(buffer, "Log message number %d", i);
        log_message(buffer);
    }
    SUCCEED();
}

// 한글/유니코드 테스트 (환경에 따라)
TEST(LibLogTest, LogMessageWithKorean) {
    log_message("한글 로그 메시지 테스트");
    SUCCEED();
}

// 포맷 문자열 테스트 (%s, %d 등이 있어도 안전한지)
TEST(LibLogTest, LogMessageWithFormatChars) {
    log_message("Message with %s and %d format chars");
    SUCCEED();
}

// main 함수 (libgtest_main.a 사용 안 할 때)
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}