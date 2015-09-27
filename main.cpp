/* -*- mode: C++; coding: utf-8 -*- */
/*
 * main.cpp
 */
#include <cstdint>
#include <cassert>
#include <memory>
#include <unistd.h>
#include <spdlog/spdlog.h>

int main (int argc, char **argv) {
    auto logger = spdlog::rotating_logger_st ("test", "logs/log", 16, 3) ;
    logger->set_level (spdlog::level::debug) ;
    logger->debug ("Log 1") ;
    chdir ("logs") ;
    logger->debug ("Log 2") ;
    chdir ("logs") ;
    logger->debug ("Log 3") ;
    return 0 ;
}
/* [END OF FILE] */
