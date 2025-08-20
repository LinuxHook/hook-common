//
// Created by dingjing on 2025/8/20.
//

#ifndef hook_common_HOOK_COMMON_HOOK_COMMON_H
#define hook_common_HOOK_COMMON_HOOK_COMMON_H
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

int64_t hook_common_read_fd_path    (int32_t fd, char* path, int32_t pathLen);

int64_t hook_common_read_proc_name  (char* procName, int32_t procNameLen);

#ifdef __cplusplus
}
#endif

#endif // hook_common_HOOK_COMMON_HOOK_COMMON_H
