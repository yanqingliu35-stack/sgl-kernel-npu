#ifndef TILING_ARGS_H
#define TILING_ARGS_H
#include <cstdint>

namespace Moe {
constexpr uint64_t COMBINE_STATE_WIN_OFFSET = 8U * 1024UL * 1024UL;
// Per-epoch Notify reservation; ping-pong is accounted for by the caller.
// Keep this in sync with NOTIFY_DISPATCH_BUFF_OFFSET in op_kernel/comm_args.h.
constexpr uint64_t NOTIFY_DISPATCH_WIN_OFFSET = 74U * 1024UL * 1024UL;
constexpr int64_t STATE_SIZE = 2 * 1024 * 1024;
}  // namespace Moe
#endif  // TILING_ARGS_H
