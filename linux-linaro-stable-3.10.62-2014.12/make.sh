#!/bin/sh

export ARCH=arm
export CROSS_COMPILE=arm-linux-gnueabi-
make -j8
