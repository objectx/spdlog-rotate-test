#! /bin/sh

[ -d logs/logs/logs ] || mkdir -p logs/logs/logs

c++ -o logger -std=gnu++1y -Ispdlog/include main.cpp && ./logger