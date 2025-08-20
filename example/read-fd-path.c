//
// Created by dingjing on 2025/8/20.
//
#include "hook-common.h"

#include <linux/limits.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    char pathBuf[PATH_MAX] = {0};

    if (hook_common_read_fd_path(2, pathBuf, sizeof(pathBuf)) > 0) {
        printf("%s\n", pathBuf);
    }

    return 0;
}