#!/bin/bash

qemu-system-i386 -d int -D ./loggingqemu_0515_morning.txt -nographic -serial mon:stdio -hdb fs.img xv6.img -smp 1 -m 512

