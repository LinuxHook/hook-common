//
// Created by dingjing on 2025/8/20.
//

#include "hook-common.h"

#include <stdio.h>
#include <string.h>
#include <unistd.h>


int64_t hook_common_read_fd_path(int32_t fd, char* path, int32_t pathLen)
{
    if (!path || pathLen <= 0) {
        return -1;
    }

    memset(path, 0, pathLen);

    char fdBuf[64] = {0};
    snprintf(fdBuf, sizeof(fdBuf) - 1, "/proc/%d/fd/%d", getpid(), fd);
    const ssize_t retLen = readlink(fdBuf, path, pathLen - 1);

    return retLen;
}